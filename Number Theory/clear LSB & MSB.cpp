#include<bits/stdc++.h>
using namespace std; 

void printBinary(int n)
{
    for (int i = 7; i>=0; i--)
    {
        cout<<((n>>i)&1);
    }
    puts("");
}

int main()
{
    int n,b;cin>>n>>b;
    
    // clear upto nth LSB bits
    printBinary(n);
    printBinary(n&(~((1<<(b+1))-1)));

    // clear upto nth MSB bits 
    printBinary(n&((1<<b)-1)); 
}
