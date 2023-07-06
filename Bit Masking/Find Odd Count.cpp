/** question: given an array of integers where every integer will be even times except one integer. find that one integer in time complexity o(n), and 
    SPACE complexity o(1) 👈. 
    here, array size, N<=-1e5, elements of the array, array[i]<=1e5 
**/ 


#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,a;
    cin>>n;
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        ans^=a;
    }
    cout<<ans<<"\n";
} 


/** input 
9
2 3 3 4 5 6 4 2 6
**/ 

/** output
5 
**/
