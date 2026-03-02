#include <iostream>
using namespace std;

int main()
{
    float radius = 0, circumference = 1;
    float pi = 3.1416;

    cout << "Enter radius: ";
    cin >> radius;

    circumference = 2 * pi * radius;

    cout << "Radius = " << radius;
    cout << "\nCircumference = " << circumference;

    return 0;
}
