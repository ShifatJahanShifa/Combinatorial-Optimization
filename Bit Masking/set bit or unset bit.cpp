#include<bits/stdc++.h>
using namespace std; 

void setOrUnset(int n,int b)
{
    if((1<<b)&n) 
    cout<<"set bit\n";
    else cout<<"unset bit\n";
}
int main()
{
    int a,b;cin>>a>>b;
    setOrUnset(a,b);
}
