-------------------------------  this is my own defined problem -------------------------------------------------

/*
    @ShifatJahanShifa

    - this problem is not from any online judge. 
    - the idea of the problem is : 
        - certain amount of matters (T-01) ( human, fruits, flowers anything can be) share a characteristic (T-02) ;
          characteristic be like:- days (30), weekday (7), type of matters like ( fruits, flowers anything can be);
          of numbered ranging (0 to 64); (if we express the bitmask as a number. otherwise we can use bitsets for large number of bits (>64))
    - what i will de is: 
        - for every element of  (T-01), i will create an integer mask number which bits will be set corresponding to the position in (T-02);

     Example; (T-01) - {1,2,3,4,5} # human 
              (T-02) - {1,2,3}  # fruits type

        so, human[1]={1,2}
            human[2]={2}
            human[3]={2,3}
            human[4]={3}
            human[5]={1,2,3} 

        then, generated mask for each human: 
            human[1]= 0 1 1 =3
            human[2]= 0 1 0 =2
            human[3]= 1 1 0 =6
            human[4]= 1 0 0 =4
            human[5]= 1 1 1 =7 

    - suppose the question is: in which pair, there is maximum common fruits?? 
        - after the above masking process, iterating over each pair, and opration between their masking value, counting the set bit of the resultant value;
          I can find the answer (*.*). 

    
    input format: n-(number of T-01), m-(number of (T-02))
                  k-(total have fruits), f1...fk-(fruits type number)
                  .
                  .
                  .
                  n 

    ***** test cases ******

    1.  5 3 
        2 1 2
        1 2
        2 2 3
        1 3
        3 1 2 3 
        
        output: 2 

    2.  7 5
        3 2 3 5
        2 4 5
        3 1 2 3
        3 1 4 5
        1 3
        4 1 3 4 5
        3 1 3 5 

        output: 3

    ** constraints in input is simple, suppose int value will be accepted.

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,e,mask;cin>>n>>m;
    vector<int>maskNumber;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        mask=0;
        while (k--)
        {
            cin>>e;e--;
            mask|=(1<<(e));
        }
        maskNumber.push_back(mask);
    }
    int ans=0,temp=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            temp=__builtin_popcount( (maskNumber[i]) & (maskNumber[j]));
            ans=max(ans,temp);
        }
    }
    cout<<ans<<"\n";
}
