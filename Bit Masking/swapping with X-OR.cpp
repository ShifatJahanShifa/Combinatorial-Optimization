#include<bits/stdc++.h>
using namespace std; 

void swapping(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}

int main()
{
    int a,b;cin>>a>>b;
    puts("before");
    cout<<"a = "<<a<<", b = "<<b<<"\n";
    swapping(a,b);
    puts("after");
    cout<<"a = "<<a<<", b = "<<b;
}
