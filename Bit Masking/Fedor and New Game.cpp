link: https://codeforces.com/problemset/problem/467/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,e,mask;cin>>n>>m>>k;
    vector<int>maskNumber(m+1);
    for (int i = 0; i <=m; i++)
    {
        cin>>maskNumber[i];
    }
    int ans=0,temp=0,temp1;
    int setBit=__builtin_popcount(maskNumber[m]);
    for (int i = 0; i <m; i++)
    {
        temp1=__builtin_popcount(maskNumber[i]);
        temp=__builtin_popcount(maskNumber[i] & maskNumber[m]);
        if( (abs(setBit-temp)+abs(temp1-temp))<=k) ans++;
    }
    cout<<ans<<"\n";
}
