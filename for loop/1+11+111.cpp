#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,t=1;
    cout<<"Enter the numnber:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
              
            sum=sum+t;
            t=t*10+1;
        
    }
    cout<<sum;
}