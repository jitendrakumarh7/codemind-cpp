#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int prime(int n)
{
    int c=1;
    for(int i=1;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2) return 1;
    else return 0;
}
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c=0;
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            c++;
        }
    }
    cout<<c;
}