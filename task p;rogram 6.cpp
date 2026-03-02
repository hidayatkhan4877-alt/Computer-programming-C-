#include <iostream>
using namespace std;

int main()
{
    float R1=0, R2=0, Req=0;

    cout << "Enter resistance R1: ";
    cin >> R1;

    cout << "Enter resistance R2: ";
    cin >> R2;

    Req = (R1 * R2) / (R1 + R2);

    cout << "Net resistance = " << Req;

    return 0;
}
