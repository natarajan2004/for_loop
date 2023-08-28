#include<iostream>
using namespace std;
int main()
{
    int a[20],n,temp,small;
    cout<<"Enter the maximum number:";
    cin>>n;
    cout<<"Enter the numbers:";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
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
        small=a[1];

}
   
   cout<<"Second smallest number is:"<<small;

return 0;
}