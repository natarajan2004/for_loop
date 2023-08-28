#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum=0.0;
    cout<<"Enter the numnber:";
    cin>>n;
    cout<<"Jarmonic serious are:";
    for(int i=1;i<=n;i++)
    {
        cout<<"1/"<<i<<" ";
        sum=sum+(1/(float)i);
    }
    cout<<endl;
    cout<<sum;
}