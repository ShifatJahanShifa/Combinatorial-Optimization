#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,b;cin>>n;
    
    // whether n is power of two or not
    if(n&(n-1)) puts("not power of two");
    else puts("power of two");
}
