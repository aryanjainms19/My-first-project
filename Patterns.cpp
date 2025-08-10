
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++) // outer
    {
        for (int j = 1; j <= n; j++) // inner
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //printing 
    // 123
    // 456
    // 789
    int m = 3;
    int num = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    // character version 
    int p =3;
    char ch = 'A';
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
     }

     // triangle pattern
    //  *
    //  * *
    //  * * *
    //  * * * *
    int q = 4;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << "* ";   
        }
        cout << endl;
    }
    // now with numbers
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    // now with alphabets
    char Crt = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            cout << Crt << " ";
        }
        Crt++;
    }

    // for consecutive numbers
    int r = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            cout << r << " ";
        }
        r++;
        cout << endl;
    }
    /*1
    12
    123
    1234*/
    for (int i = 0; i < 4; i++)
    {
        for (int  j= 1; j <= i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    / reverse triangle pattern
    /*
    1
    21
    321
    4321
    */
   int s = 4;
   for (int i = 0; i < s; i++)
   {
    for (int j = i + 1 ; j > 0; j--)
    {
        cout << j << " ";
    }
    cout << endl;
   }
   
    // floyd triangle pattern
     /*1
    23
    456
    78910
    */
    int  t = 4;
    int FTP = 1;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << FTP << " ";
            FTP++;
        }
        cout << endl;
    }
    //Character Version
    int u = 4;
    
    
    return 0;
}