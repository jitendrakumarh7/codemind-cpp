#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%2!=0&&x[i]!=x[i+1])
        {
            c+=1;
        }
    }
    cout<<c;
    
}