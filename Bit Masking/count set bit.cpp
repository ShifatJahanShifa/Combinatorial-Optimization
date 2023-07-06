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
    int a,b;cin>>a;
    printBinary(a);
    int cnt=0;
    for(int i=31;i>=0;i--)
    {
        if((a>>i)&1) cnt++; 
    }
    cout<<"total: "<<cnt;
}
