/*
    primality test (sieve of eratosthenis):
    * a number will be given in input in range (1000000) / 10^6.
    * addition, subtraction operations are faster than multiplication and division operations
*/


#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
void sieve()
{
    for (int i = 0; i <1000005; i++)
    {
        arr[i]=1;
    }
    int root=sqrt(1000005);
    arr[0]=0;
    arr[1]=0;
    for (int i = 2; i <=root; i++)
    {
        if(arr[i]) 
        {
            for (int j = i+i; j<1000005; j+=i)
            {
                arr[j]=0;
            }
        }
    }
}

int main()
{
    sieve();
    int number;
    cin>>number;
    arr[number] ? puts("Prime Number"):puts("Composite Number");
}
