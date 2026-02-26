     // Fig. 1.2: fig01_02.cpp // ye program ki file ka naam hai.
    // A first program in C++.// ye c++ ka pehla program hai.
#include <iostream>// ye cout ko print karany ki leye awr cout ko lene ke leye use hota hai.
using namespace std;// ye cout ko direct liknay ke leye use hota hai.
int main() // ye wo function hai jahan se program shoro hota hai.
    {
    char a = 'a'; //char data type ka variable 'a' declared kiya
    //isme ek character alphbet store hota hai.
    
    cout<< "Enter an alphabet for a:\n";//user se ek alphbet enter karne ka mesage print karega.
    // \n next line per le jata hai.
    
    cin >> a;// user jo alphbet enter karega wo 'a' mai store hoga.
    cout << "a = " << a;// pehle "a=" print hoga 
    //phir variable 'a' ki value print hogi.
    
    
    return 0;   //  yaha per program khatam hota hai.
    
    } //  ye main function ka end hai.

