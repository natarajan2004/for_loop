#include<iostream>
using namespace std;
int main()
{
    int a[20],n,temp,saved;
    cout<<"Enter the maximum number:";
    cin>>n;
    cout<<"Enter the numbers:";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        saved=a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
               

        }
        
        if(a[i]==saved)
        {
            cout<<"This is palindrome";
            break;
        }
        else
        {
            cout<<"Not palindrome";
            break;
        }
}
   

return 0;
}