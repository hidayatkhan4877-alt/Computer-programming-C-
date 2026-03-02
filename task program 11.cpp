#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,root1,root2,dis;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    dis = b*b - 4*a*c;

    root1 = (-b + sqrt(dis))/(2*a);
    root2 = (-b - sqrt(dis))/(2*a);

    cout << "Root1 = " << root1;
    cout << "\nRoot2 = " << root2;

    return 0;
}
