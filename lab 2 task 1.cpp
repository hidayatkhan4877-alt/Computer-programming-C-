#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 5.5;
    double c = 20.99;
    char d = 'A';
    bool e = true;

    cout << "Integer value: " << a << endl;
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Location of int: " << &a << endl;

    cout << endl;

    cout << "Float value: " << b << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Location of float: " << &b << endl;

    cout << endl;

    cout << "Double value: " << c << endl;
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;
    cout << "Location of double: " << &c << endl;

    cout << endl;

    cout << "Char value: " << d << endl;
    cout << "Size of char: " << sizeof(d) << " bytes" << endl;
    cout << "Location of char: " << (void*)&d << endl;

    cout << endl;

    cout << "Bool value: " << e << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    cout << "Location of bool: " << &e << endl;

    return 0;
}
