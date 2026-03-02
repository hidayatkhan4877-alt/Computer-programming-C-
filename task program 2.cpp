#include <iostream>
using namespace std;

int main()
{
    float u = 0, v = 0, a = 0, t = 0;

    cout << "Enter initial velocity (u): ";
    cin >> u;

    cout << "Enter acceleration (a): ";
    cin >> a;

    cout << "Enter time (t): ";
    cin >> t;

    v = u + (a * t);

    cout << "\nInitial velocity = " << u;
    cout << "\nAcceleration = " << a;
    cout << "\nTime = " << t;
    cout << "\nFinal velocity = " << v;

    return 0;
}
