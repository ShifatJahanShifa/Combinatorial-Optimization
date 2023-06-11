link: https://www.codechef.com/problems/GCDQ


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--)
	{
	    int N,Q;cin>>N>>Q;
	    vector<int>v(N+2);
	    for(int i=1;i<=N;i++)
	    {
	        cin>>v[i];
	    }
      v[0]=v[N+1]=0;
	    vector<int>forward(N+10),backward(N+10);
	    forward[0]=backward[N+1]=0;
	    for(int i=1;i<=N;i++)
	    {
	        forward[i]=__gcd(v[i],forward[i-1]);
	    }
	    for(int i=N;i>0;i--)
	    {
	        backward[i]=__gcd(backward[i+1],v[i]);
	    }
	    int l,r;
	    while(Q--)
	    {
	        cin>>l>>r;
	        cout<<__gcd(forward[l-1],backward[r+1])<<"\n";
	    }
	}
}


