#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=5;i++)
    {
        sum=sum+(i*i);
    }
    cout<<sum;
}