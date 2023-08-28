#include<iostream>
using namespace std;
int main()
{
    int a,factor;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            factor=i;
            break;
        }
    }
    cout<<"The smallest prime factor is : "<<factor;
}
