#include <iostream>
using namespace std;

int main()
{
    float voltage = 0, current = 0, resistance = 0;

    cout << "Enter voltage (V): ";
    cin >> voltage;

    cout << "Enter current (I): ";
    cin >> current;

    resistance = voltage / current;

    cout << "\nVoltage = " << voltage << " V";
    cout << "\nCurrent = " << current << " A";
    cout << "\nResistance = " << resistance << " Ohm";

    return 0;
}
