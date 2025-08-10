#include <iostream>
using namespace std;
// checking whether no is positive or negative
    int main(){
        int n = -45;

        if (n>=0){
            cout << "n is a positve integer\n";
        } else {
            cout << "n is a negative integer\n";
        }
         // cheking if a person can get license
         int age;
         cout << "Enter your age :";
         cin >> age;

         if (age >= 18){
            cout << "you can get license\n";
         } else {
            cout << "you can't get license" << endl;
         }
   
         // checking a no. is even or odd
         int number;
         cout << "Enter your number :";
         cin >> number;
         if (number % 2 == 0){
            cout << "NUmber is Even" << endl;
         } else {
            cout << "Number is odd" << endl;
         }
         int Marks;
         cout << "Enter your Marks :";
         cin >> Marks;
         if (Marks >= 90){
            cout << "A" << endl;
         } else if (Marks >=80 && Marks < 90) {
            cout << "B" << endl;
         } else {
            cout << "C" << endl;
         } 
         // checking whether i character is upppercase or lowercase
         char ch;
         cout << "Enter your character\n";
         cin >> ch;
         if( ch >='A' && ch <= 'Z'){
         // if( ch >='65' && ch <= '90'){
            cout << "UPPERCASE\n";
         }
         else {
            cout << "lowercse\n";
         }
         // ternary statement
         int cd = 67;

         cout << (cd >= 0 ? "positive" : "negative") << endl;
         //Loops
         //WHILE LOOP
         //Ex - print numbers from from 1 to 5
         int count = 1;
         while (count <= 5)
         {
            cout << count << " ";
            count++;
         }
         //FOR LOOP
         int N =4;
         for (int i = 1; i <= N; i++)
         {
            cout << i << " " << endl;
         }
      //Ex -  calculate sum of series

      int Num1;
      cout << "Enter first number of series" << endl;
      cin >> Num1;

      int Num2;
      cout << "Enter common difference" << endl;
      cin >> Num2;

      int Num3;
      cout << "Enter last number" << endl;
      cin >> Num3;

      int sum = 0;
      for (int i = Num1; i <= Num3; i += Num2)
      {
         sum += i;
         // if (i = Num1 + Num2)
         // {
         //    break;
         // }
         //it will now add upto two initial terms , thus used
         // to bring break in loop
      }
               cout << sum << endl;

   // do while loop
     // It runs code atleast one time
     do
     {
      cout << "Hey cutiee!" << endl;
     } while (3 > 5);

      // print every number from 1 to 9
     int L = 9;
     int m =1;
     do
     {
      cout << m << " " << endl;
      m++;
     } while (m <= L);
     
     // check if a number is prime or not

     int prNo;
     cout << "Enter the number u want to check if it is prime or not" << endl;
     cin >> prNo;
     bool isprime = true;

     for (int i = 2; i < prNo; i++)
     // could be optimized by checking i from 2 to root(prNo) coz after root(prNo) factors of any no. starts repeating
     // for(int i = 2; i*i <= prNo)
     {
      if (prNo%i == 0)
      {
        isprime = false;
        break;
      }
    }

    if (isprime == true)
    {
        cout << "Number is prime";
    } else
    {
        cout << "Number is not prime";
    }

    //NESTED Loops

    //  now if i want to print 5 stars in every row
     for (int i = 1; i <= 5; i++)
     {
        int x = 10;
        for (int j = 1; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
     }
    }