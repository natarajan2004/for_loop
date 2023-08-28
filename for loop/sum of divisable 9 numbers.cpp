#include <iostream>  
using namespace std;  
int main() 
{
    int sum=0;
    for(int i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            sum=sum+i;
        }
    }  
    cout<<sum;
}