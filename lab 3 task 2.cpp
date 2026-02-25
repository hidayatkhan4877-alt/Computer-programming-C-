#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num > 0 && num < 100)
        cout << "Number is between 0 and 100";
    else
        cout << "Number is NOT between 0 and 100";

    return 0;
}
