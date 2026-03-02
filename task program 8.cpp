#include <iostream>
using namespace std;

int main()
{
    float R1=0, R2=0, R3=0;
    float D1, D2, D3;

    cout << "Enter star resistances:\n";
    cin >> R1 >> R2 >> R3;

    D1 = (R1*R2 + R2*R3 + R3*R1)/R3;
    D2 = (R1*R2 + R2*R3 + R3*R1)/R1;
    D3 = (R1*R2 + R2*R3 + R3*R1)/R2;

    cout << "Delta resistances:\n";
    cout << D1 << " " << D2 << " " << D3;

    return 0;
}
