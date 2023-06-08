/*
    author: @ShifatJahanShifa
    GCD by Euclid's Division theorem:
    * gcd(a,0)=a
    * gcd(a,b)=gcd(b,a%b)
    
    15)25(1
       15
    --------
       10)15(1
          10
        -------
          5)10(2
            10
        --------
            00

     .
    . . the gcd = 5. 

    we used to define gcd by the above handy procedure in childhood 😊
*/


#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    // base case
    if(b==0) return a;
    if(a==0) return b;

    return GCD(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD is "<<GCD(a,b);
}
