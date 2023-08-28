#include <iostream>  
using namespace std;  
int main()  
{  
  int n1,n2;
  cout<<"Enter the number:";
  cin>>n1;
  int sum=1;
  cout<<"Enter the power:";
  cin>>n2;
  for(int i=1;i<=n2;i++)
  {
    sum=sum*n1;
  
  }
  cout<<sum;
} 