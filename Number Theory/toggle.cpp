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

void setOrUnset(int n,int b)
{
    if((1<<b)&n) 
    cout<<"set bit\n";
    else cout<<"unset bit\n";
}

int main()
{
    int a,b;cin>>a>>b;
    printBinary(a);
    setOrUnset(a,b); 
    //toggle
    printBinary(a^(1<<b));   // toggle=a^(1<<b)
}
