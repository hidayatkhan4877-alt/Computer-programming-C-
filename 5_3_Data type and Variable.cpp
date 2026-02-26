     // Fig. 1.2: fig01_02.cpp // ye program ki file ka naam hai.
    // A first program in C++.// ye batata hai ka ye c++ ka pehle program hai.
#include <iostream> // ye iostream library input aur output ke leye use hota hai.
using namespace std;//ye cout ko direct used karnay ke leye use hota hai.

int main()//ye sab se important function hai jahan se program start hota hai.
    {
    int a = 10; // int type ka varaible 'a' declared kiya.
    // aur uski initial value 10 rakhi.
    
    cout<< "Enter value for a:\n";//user se value enter karne ke liye message print karege.
    // \n next line par le jata hai.
    
    cin >> a; // user jo value enter karege wo varaible 'a' me store hoga.
    cout << "a = " << a; //pehle "a=" print hoga.
    
    
    return 0;   // ye wo function hai jahan per program khatm hoga.
    } // ye main function ka end hai.

