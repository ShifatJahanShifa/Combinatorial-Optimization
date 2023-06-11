/*
    - doing prime factorization
    - T.C=O(sqrt(N))
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>primeFactors;
    for (int i = 2; i*i <=n; i++)
    {
        while (n%i==0)
        {
            primeFactors.push_back(i);
            n/=i;
        }
    }
    if(n>1) primeFactors.push_back(n);
    for(auto prime:primeFactors){
        cout<<prime<<" ";
    }
}
