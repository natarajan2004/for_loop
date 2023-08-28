#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, flag;  
  
 
  for(i = 1; i <= 100; i++)  
  {
      flag=0;
      n=100/2;
      for(int j=2;j<=i/2;j++)
  {  
      if(i%j== 0)  
      {  
       
          flag=1;  
      }  
      
  }  
  if (flag==0)  
  {
      cout << i<<endl;}  
  }
  return 0;  
}  