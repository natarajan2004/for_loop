#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n,i,j;
    cout<<"Enter maximum element:";
    cin>>n;
    cout<<"Enter the numbers:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            cout<<a[i];
        }
        
    }
    
    
    
}