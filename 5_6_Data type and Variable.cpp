     // Fig. 1.2: fig01_02.cpp // ye program ki file ka naam hai.
    // A first program in C++.// ye c++ ka pehla program hai.
#include <iostream>// ye iostream library cout ko print karna awr cin ko lene ki leye use hota hai
using namespace std;// agar program me ye pehle se lika hai to per humain srif cout likna parta.
// hai. warna cout ka sath std; lika jaata hai.
int main() // ye sab se important function hai yaha se program start hota hai.
    {
    float a = 10.2, b, c; // 3 float data type variable banaye
    // a ki value 10.2 hai.
    // b aur c abhi empty hai.
    
    cout<< "Enter value for a:\n";//user se a ki value mang raha hai.
    cin >> a;// user jo value enter karega wo 'a' me store hoga.
    
    cout<< "Enter value for b:\n";// user se b ki value mang raha hai.
    cin >> b;// user jo value enter karega wo 'b' me store hoga.
    
    c = a+b;// a aur b ko add karke result c me store kiya.
    
    cout << "a + b = " << c;// sum ko screen per print karega.
    
    
    return 0;   // yaha per program khatam hoga.
    } // ye main function ka end hai.

