      // Fig. 1.6: fig01_06.cpp // ye file ka naam hai
     // Addition program.// ye dwo number ko add karna ka program ha.
#include <iostream> // ye iostream library include karta hai cin aur cout ke leye
using namespace std;//agaar ye pehle se lika to per humain srif cout likna parta hai
      
int main() // ye se program start hota hai.
    {
    int integer1;  //   pehla number store karnai ke leye variable.
    int integer2;  //  dosra number store karnai ke leye variable.
    int sum;       // dono numbers result store karna ka variable.
    
    cout << "Enter first integer\n";  // useer se pehla number mang raha hai.awr \n new line deta hai.
    cin >> integer1;                  // user ka deya howa number integer1 me store hoga.
    
    cout << "Enter second integer\n"; // user se dosra number mang raha hai.
    cin >> integer2;                  // user ka deya hwa number integer2 me store hoga.
    
    sum = integer1 + integer2;  // dono number ko sum kar kai result sum me store kiya.
    
    cout << "Sum is " << sum << endl; // sum screen per print hoga.
    // end1 new line deta hai.
    
    return 0;   // ye wo function hai jahan per program khatam hoga.
    
    } // ye main function ka end hai.
