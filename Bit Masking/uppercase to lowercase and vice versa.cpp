#include<bits/stdc++.h>
using namespace std; 

void printBinary(int n)
{
    for (int i = 7; i>=0; i--)
    {
        cout<<((n>>i)&1);
    }
    puts("");
}

int main()
{
    // print binary of the characters upto e
    for (char i = 'A'; i <='E'; i++)
    {
        cout<<i<<"\n";
        printBinary((int)i);
    }
    for (char i = 'a'; i <='e'; i++)
    {
        cout<<i<<"\n";
        printBinary((int)i);
    }
    
    // Uppercase to Lowercase
    char ch='T';
    printBinary((int)ch);
    char ch1=(ch|(1<<5));
    cout<<ch1<<"\n";
    printBinary((int)ch1);

    // Lowercase to Uppercase
    ch='y';
    printBinary((int)ch);
    ch1=(ch&(~(1<<5)));
    cout<<ch1<<"\n";
    printBinary((int)ch1); 

    // Uppercase to Lowercase by space 
    ch='G';
    cout<<(char)(ch|' ')<<"\n";

    // Lowercase to Uppercase by underscore
    ch='r';
    cout<<(char)(ch&('_'));
}
