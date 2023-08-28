#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter maximum size of first element:";
    cin>>n1;
    int a[n1];
    cout<<"Enter maximum size of second element:";
    cin>>n2;
    int b[n2];
    cout<<"Enter the first elements:";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter second elements:";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {   
            if(a[i]==b[j])
            {
                cout<<"Common elements are:"<<a[i]<<" ";
                break;
            }
        }
    }
}