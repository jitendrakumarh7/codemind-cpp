#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    int i=0,j=2,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    
    while(j<n)
    {
        if(x[i]%2==0)
        {
            if(x[j]%2!=0)
            {
                c++;
            }
        }
        else if(x[i]%2!=0)
        {
            if(x[j]%2==0)
            {
                c++;
            }
        }
        i++,j++;
    }
    cout<<c<<endl;
}