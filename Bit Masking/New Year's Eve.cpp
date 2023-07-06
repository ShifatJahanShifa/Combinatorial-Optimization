link: https://codeforces.com/contest/912/problem/B

#include <bits/stdc++.h>
#include<bitset>
using namespace std;

int main()
{
    unsigned long long int n,k,ans;
    cin>>n>>k;
    if(k==1) ans=n;
    else{
    ans=bit_ceil(n);
    if(ans==n) 
    {
        ans^=(n-1);
    }
    else ans--;}
    cout<<ans;
}
