// CompoundTypeProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
/*
	《C++面向对象程序设计》（第2版）清华大学出版社 龚晓庆 等
	 第4章  复合类型
*/

using namespace std;

#define SECTION_POINTER

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello world!" << endl;

#ifdef  SECTION_POINTER
	int iVal = 1024;
	int *pi = &iVal;
	cout << "sizeof(pi):" << sizeof(pi) << endl;
	cout << "sizeof(iVal):" << sizeof(iVal) << endl;
	cout << "&pi:" << &pi << endl;
	cout << "pi:" << pi << endl;
	cout << "&iVal:" << &iVal << endl;
	cout << "*pi:" << *pi << endl;
	cout << "iVal:" << iVal << endl;

	int *ptr1 = NULL;
	int *ptr2 = 0;
	int *ptr3 = nullptr;

	ptr1 = ptr2 = ptr3 = &iVal;
	cout << "ptr1:" << ptr1 << endl;
	cout << "*ptr1:" << *ptr1 << endl;
#endif // SECTION_POINTER


	system("pause");
	return 0;
}
