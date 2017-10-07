// ObjsProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <memory>
#include <cstring>

using namespace std;

/*
	《C++面向对象程序设计》（第2版）清华大学出版社 龚晓庆 等
	 第7章  对象的初始化、复制和销毁
	 深复制 影响性能
	 浅复制 + 引用计数 提升性能 ---> 写时复制 ---> 智能指针(C++11: shared_ptr, unique_ptr, weak_ptr.  header:<memory>)
	 shared_ptr
	 unique_ptr
	 weak_ptr
*/

class str_obj
{
public:
	str_obj() : len(0), ref_cnt(1)
	{
		s = new char[1];
		s[0] = 0;
	};

	str_obj(const char* p) : ref_cnt(1)
	{
		len = strlen(p);
		s = new char[len + 1];
		strcpy(s, p);
	}

	~str_obj()
	{
		delete[] s;
	};

public:
	int len, ref_cnt;
	char* s;
};

class my_string
{
public:
	my_string()
	{
		st = make_shared<str_obj>();
	}

	my_string(const char* p)
	{
		st = make_shared<str_obj>(p);
	}

	my_string(const my_string& str) : st(str.st)
	{

	}

	my_string& operator=(const my_string& str);
	void print() const { cout << st->s << endl; }
	void reverse();

	~my_string(){};

private:
	shared_ptr<str_obj> st;
};

my_string& my_string::operator=(const my_string& str)
{
	st = str.st;
	return *this;
}

void my_string::reverse()
{
	if (!st.unique())
	{
		char *tp = st->s;
		st = make_shared<str_obj>(tp);
	}

	if (st.unique())
	{
		int n = st->len;
		for (int ix = 0; ix < n / 2; ++ix)
		{
			char ch = st->s[ix];
			st->s[ix] = st->s[n - ix - 1];
			st->s[n - ix - 1] = ch;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	shared_ptr<string> ps;
	ps = make_shared<string>("I love you...");
	cout << ps->c_str() << endl;

	my_string str1("Practice makes perfect");
	my_string str2;
	str2 = str1;
	cout << "\nstring1: ";
	str1.print();

	cout << "\nstring2: ";
	str2.print();

	str1.reverse();
	cout << "\nstring1: ";
	str1.print();

	cout << "\nstring2: ";
	str2.print();

	system("pause");
	return 0;
}
