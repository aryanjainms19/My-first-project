#include <iostream>
using namespace std;

int main() {
    int age = 18;
    char iss = 'A';
    float PI = 3.14f;
     // always use f after data of float otherwise it cosider it as double int type
    cout << iss << endl;
    cout << sizeof(age) << endl;
    bool issafe = "true";
    double price = 100.59;
    // Type CAsting
    int value = iss;
    // this is implicit conversion(done by compiler)(small in big)
    // this is explicit casting(forced by programmer)(big in small)
    int newprice = (int)price;
    cout << value << endl;
    // true is 1 and false is 0
    // integer take space of 4 bytes in memory and char takes 1 byte, float - 4 bytes,bool- 1 byte, double - 8byte
    // Inputs in c++
    int PhoneNumber;
    cout << "Enter your number QT:";
    cin >> PhoneNumber;
    cout << "Will call you at " << PhoneNumber << endl;
    // arithmetic operators
    int num1 , num2;
    cout << "enter number 1 :" << endl;
    cin >> num1;
    cout << "enter number 2 :" << endl;
    cin >> num2; 
    cout << "sum = " << (num1+num2) << endl;
    cout << "Difference = " << (num1-num2) << endl;
    cout << "Product = " << (num1*num2) << endl;
    cout << "Division = " << (num1/num2) << endl;
    cout << "modulo = " << (num1%num2) << endl;
    // when two different data types are used in operators like double/int will give double , float/int will give float (gives bigger data type output)
    int a = 6;
    double b = 4;
    cout << "division of 6 by 4 is =" << (a/b) << endl;
    // or 
    // int a =6, b =4;
    // cout << "division of 6 by 4 is = " (a/(double)b);
    // EX - if 5 is stored in double and 2 is stored in int it would give 2.5(double)
    // Relational Operators
    cout << (3 < 5) << endl;
    cout << (3 > 5) << endl;
    cout << (3 <= 5) << endl;
    cout << (3 >= 5) << endl;
    cout << (3 == 5) << endl;
    cout << (3 != 5) << endl;
    // tru-1 false-0
    // Logical Operators
    // NOT -- !
    // OR --||
    // and --&&
    cout << ( (3 > 1) || (3 > 5) ) << endl;
    cout << ( (3 > 1) && (3 > 5) )<< endl;
    cout << !(6>7) << endl;
    // Unary operators
    // a++ = a + 1
    // Post-Increment
    int c = b++; // c=b -> update value of b
    cout << "b = " << b << endl; // b = 5
    cout << "c = " << c << endl; // c = 4
    //Pre - Increment
    int d = 9;
    int v = ++d; // v update -> update d
    cout << "d = " << d << endl; // d = 10
    cout << "v = " << v << endl; // v = 10
    //Decrement is also same
    return 0;
}

 