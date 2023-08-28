#include<iostream>
using namespace std;
int main()
{
    int a[20],n,sum=0;
    cout<<"Enter the maximum number:";
    cin>>n;
    cout<<"Enter the numbers:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}