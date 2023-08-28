#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the maximum number:";
    cin>>n;
    int b[n],a[n];
    cout<<"Enter the numbers:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int fact=1;
        for(int j=1;j<=a[i];j++)
        {
            fact=fact*j;
        }
        
        b[i]=fact;
    }
    for(int i=0;i<n;i++)
    {
    cout<<b[i]<<" ";
    }
    return 0;
}