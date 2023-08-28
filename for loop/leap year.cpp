#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the starting year: ";
    cin>>n1;
    cout<<"Enter the ending year : ";
    cin>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(i%4==0 || i%100==0)
        {
            cout<<i<<endl;
        }
    }
    
}