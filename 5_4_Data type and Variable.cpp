    // Fig. 1.2: fig01_02.cpp // ye program ke file ka naam hai.
    // A first program in C++.// ye batata hai ka ye c++ ka pehla program hai.
#include <iostream>// ye cout ko print karny ka leye aur cin ko lene ka liye use hota hai.
using namespace std;// ye cout ko direct liknay ke liye use hota hai.
int main() // ye sab se important function hai jahan se program shoro hota hai.
    {
    float a = 10.2; // float data type ka varaible 'a' declared kiya.
    //isme decimal value 10.2 store kiya.
    
    cout<< "Enter value for a:\n"; // user se value enter karna ka message print karega 
    // \n next line ke liye use hota hai.
    
    cin >> a; // user jo decimal ya number enter karega 
    // wo varaible 'a' me stire ho jayega.
    cout << "a = " << a; // pehle "a=" print hoga.
   // phir variable 'a' ki value print hogi.
    
    
    return 0;   // ye wo function jahan per program khatam hota hai.
    } // ye main function ka end hai.

