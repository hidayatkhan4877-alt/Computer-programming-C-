#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float base, perp, hyp;

    cout << "Enter base and perpendicular: ";
    cin >> base >> perp;

    hyp = sqrt(base*base + perp*perp);

    cout << "Hypotenuse = " << hyp;

    return 0;
}
