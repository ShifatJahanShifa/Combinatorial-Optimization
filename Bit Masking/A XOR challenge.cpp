link: https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/

------------------------------------------------------ my solution ----------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;cin>>c;
	long long int a=0,b=0;
	int bitNumber=(int)log2(c)+1;
	a=(1<<(bitNumber-1))-1;
	b=(c^a);
	long long ans=a*b;
	cout<<ans<<"\n";
}
