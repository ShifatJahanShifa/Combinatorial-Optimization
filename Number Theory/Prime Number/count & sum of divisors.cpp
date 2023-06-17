/*
    @ShifatJahanShifa
    
    primality test (sieve of eratosthenis):
    * a number will be given in input in range (1000000) / 10^6.
    * addition, subtraction operations are faster than multiplication and division operations

    Highest prime and lowest prime:
    * using sieve algorithm, getting highest prime and lowest prime
    * T.C= O(nloglogn) for sieve
    * T.C= O(1) for finding highest or lowest prime of a number

    Prime Factorization:
    * using highest prime and lowest prime.
    * T.C= o(nloglogn + logn)
    * i can use this approach per query cause each query will cost logn time. 
    
    Finding count & sum of divisors using efficient prime factorization:  
        -- formulae:

                    n1    n2     n3 
        number =  p1  * p2   * p3   

        * count / total divisors = (n1+1)*(n2+1)*(n3+1) 

                  n1+1         n2+1         n3+1
                p1    -1     p2    -1      p3   -1
        * sum = ---------- * --------- * ---------- 
                  p1-1       p2-1         p3-1  

    --- i just thought in one running, same input can be given ;') 

*/

#include <bits/stdc++.h>
using namespace std;

const int n = 1000005;
int arr[n];
vector<int> highestPrime(n, 0), lowestPrime(n, 0);
vector<int> primeFactors[n];
map<int,int>PFactors[n];

void sieve()
{
    for (int i = 0; i < 1000005; i++)
    {
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i < n; i++) // O(n)
    {
        if (arr[i])
        {
            highestPrime[i] = i;
            lowestPrime[i] = i;
            for (int j = i + i; j < n; j += i)    // o(loglogn)
            {
                arr[j] = 0;
                highestPrime[j] = i;
                if (lowestPrime[j] == 0)
                {
                    lowestPrime[j] = i;
                }
            }
        }
    }
}

void primeFactorization(int D)      // o(logn)
{
    int temp = D, primeF;
    while (temp > 1)
    {
        primeF = highestPrime[temp];
        while (temp % primeF == 0)
        {
            primeFactors[D].push_back(primeF);
            PFactors[D][primeF]++;
            temp /= primeF;
        }
    }
}

int main()
{
    sieve();
    for (int i = 0; i < 5; i++)
    {
        int number;
        cin >> number;
        arr[number] ? puts("Prime Number") : puts("Composite Number");
        cout << "highest prime = " << highestPrime[number] << "\n";
        cout << "lowest prime = " << lowestPrime[number] << "\n";
        if(primeFactors[number].size()==0)
        primeFactorization(number);
        cout << "prime factors are: \n";
        for (auto prime : primeFactors[number])
        {
            cout << prime << " ";
        }
        puts(""); 
        long long sum=1,count=1;
        int p,n;
        for(auto mp:PFactors[number]) 
        {
            p=mp.first;
            n=mp.second;
            sum*=(pow(p,n+1)-1)/(p-1);
            count*=(n+1);
        }
        cout<<"total divisors: "<<count<<"\n";
        cout<<"sum: "<<sum<<"\n";
    }
}
