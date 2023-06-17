/*
    playing with divisors: 
    * count of divisors. 
    * sum of divisors 
    * T.C= O(nlogn)
    * shorter code than prime factorization

*/

#include <bits/stdc++.h>
using namespace std;

const int n = 1000005;
vector<int>divisors[n],sum(n,0);

void calculateDivisor()
{
    for (int i = 2; i <n; i++)  // O(n)
    {
        for (int j = i;j<n; j+=i)    // O(logn)
        {
            divisors[j].push_back(i);
            sum[j]+=i;
        }
    }
}

int main()
{
    calculateDivisor();
    int T;cin>>T;
    while (T--)
    {
        int number;cin>>number;
        cout<<"total divisors: "<<divisors[number].size()<<"\n";
        cout<<"divisors are: \n";
        for (auto divisor: divisors[number])
        {
            cout<<divisor<<" ";
        }
        puts("");
        cout<<"sum of the divisors: "<<sum[number]<<"\n";
    }
}
