#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    int i=0,j=2;
    int c=0;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    i=0;
    while(j<n)
    {
        if(x[i]%2==0)
        {
            if(x[j]%2==0)
            {
                if(x[i+1]%2==0)
                {
                    c++;
                }
            }
        }
      i++,j++;
    }
    cout<<c<<endl;
}