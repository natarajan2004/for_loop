#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The odd numbers are:";
    for(int i=1;i<=n*2;i++)
    {
        if(i%2==1)
        {
            cout<<i<<" ";
            sum=sum+i;
           
        }
    }
    cout<<endl;
    cout<<"sum is:"<<sum;
}