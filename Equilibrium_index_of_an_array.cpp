#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int x[n],c=0;
        int sum=0,sum1=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            sum+=x[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            sum-=x[i];
            if(sum==sum1)
            {
             c=1;
                cout<<i<<endl;
                break;
                
            }
            sum1+=x[i];
        }
        if(c==0)
        {
            cout<<-1<<endl;
        }
        t--;
    }
}