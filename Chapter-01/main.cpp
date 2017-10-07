#include <iostream>
#include <limits.h>
#include <limits>
#include <string>

using namespace std;

int myMax(int x, int y)
{
    return (x>y? x:y);
}

int main()
{
    cout << "Hello world!" << endl;

    cout << "a\ta^2\ta^3" << endl;
    for(int ii=1; ii<5; ii++)
        cout << ii << "\t" << ii*ii << "\t" << ii*ii*ii << endl;

    const double PI = 3.1415926;
    cout << "请输入圆的半径：" << endl;

    double radius, area(0);
    cin >> radius;
    area = PI * radius * radius;
    cout << "圆半径为：" << radius << endl
         << "圆面积为：" << area << endl;

    cout << "bool:\t" << sizeof(bool) << endl;
    cout << "char:\t" << sizeof(char) << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << endl;
    cout << "char32_t:\t" << sizeof(char32_t) << endl;
    cout << "short:\t" << sizeof(short) << endl;
    cout << "int:\t" << sizeof(int) << endl;
    cout << "long:\t"   << sizeof(long) << endl;
    cout << "long long:\t" << sizeof(long long) << endl;

    cout << "float:\t" << sizeof(float) << endl;
    cout << "double:\t" << sizeof(double) << endl;
    cout << "long double:\t" << sizeof(long double) << endl;

    short   tom = SHRT_MAX;
    unsigned short jerry = tom;
    cout << "Tom has " << tom << " dollars and Jerry has " << jerry;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    tom = tom + 1;
    jerry  = jerry + 1;
    cout << "Tom has " << tom << " dollars and Jerry has " << jerry;
    cout << " dollars deposited.\nPoor Tom!" << endl;
    tom = 0;
    jerry = 0;
    cout << "Tom has " << tom << " dollars and Jerry has " << jerry;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    tom = tom - 1;
    jerry = jerry - 1;
    cout << "Tom has " << tom << " dollars and Jerry has " << jerry;
    cout << " dollars deposited." << endl << "Lucky Jerry!" << endl;

    const int cbv = 0x10111;
    cout << cbv << endl;


    cout << "A very, very long string literal that"
            " cannot be written in a single line." << endl;

    /*
        R"()"   // C++11新增原始（raw）字符串类型

        const string str = R"(abc\na\b\t He said, "OK.")";
        cout << str << endl;
    */

    cout << true << "\t" << false << endl;
    cout << boolalpha << true << "\t" << false << endl;
    cout << noboolalpha << true << "\t" << false << endl;

    fflush(stdin);
    cout << "cin.get() a character:" << endl;
    char ch = cin.get();
    cout.put(ch);

    auto x = 5;
    auto ssize = sizeof(int);
    auto name = "world";
    cout << "hello, " << name;

    decltype(sizeof(ssize))   dsize = sizeof(ssize);
    const int ci = 0;
    decltype(ci) xx = 1;
    decltype(myMax(3, 5)) y = xx;
    cout << "dsize = " << dsize << "; y = " << y << endl;

    typedef int PhoneBookItem;
    /*
        暂不支持C++11的using 别名 = 类型名
        这个语法
        using   uuint32_t  = unsigned int ;
        using   PBI = PhoneBookItem;
    */



    return 0;
}
