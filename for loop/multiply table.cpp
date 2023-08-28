#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numnber:";
    cin>>n;
    for(int i=1;i<=10 ;i++)
    {
        for(int j=1;j<=n ;j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
}