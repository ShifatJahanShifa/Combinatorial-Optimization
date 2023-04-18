#include<bits/stdc++.h>
using namespace std; 

void printBinary(int n)
{
    for(int i=7;i>=0;i--)
    {
        cout<<((n>>i)&1); 
    }
    puts("");
}
int main()
{
    int a=9;
    printBinary(9);
}
