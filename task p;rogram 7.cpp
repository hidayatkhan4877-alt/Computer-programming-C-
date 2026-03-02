#include <iostream>
using namespace std;

int main()
{
    float R1=0, R2=0, It=0, I1=0, I2=0;

    cout << "Enter R1: ";
    cin >> R1;

    cout << "Enter R2: ";
    cin >> R2;

    cout << "Enter total current: ";
    cin >> It;

    I1 = It * (R2 / (R1 + R2));
    I2 = It * (R1 / (R1 + R2));

    cout << "Current in R1 = " << I1;
    cout << "\nCurrent in R2 = " << I2;

    return 0;
}
