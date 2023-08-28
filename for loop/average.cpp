#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n,i,j,sum=0,count=0;
    cout<<"Enter maximum element:";
    cin>>n;
    cout<<"Enter the numbers:";
    for(i=0;i<n;i++)
    {
        
        cin>>a[i];
        
      
    }
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    j=sum/n;
    }
    cout<<j;
}