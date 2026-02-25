#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if(num1 == num2)
        cout << "Numbers are equal";

    if(num1 > num2)
        cout << "First number is greater";

    if(num1 < num2)
        cout << "First number is smaller";

    return 0;
}
