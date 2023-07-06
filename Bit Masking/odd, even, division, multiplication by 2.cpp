#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n;cin>>n;

    // even and odd checking
    if(n&1) cout<<"Odd\n";
    else cout<<"Even\n";

    // division and multiplication 
    cout<<(n>>1)<<"\n";
    cout<<(n<<1)<<"\n"; 
}
