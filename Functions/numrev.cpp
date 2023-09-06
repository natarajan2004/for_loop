#include <iostream>  
using namespace std;
int numrev(int num)
{
    int  reverse=0, rem;    
    while(num!=0)    
  {    
     rem=num%10;      
     reverse=reverse*10+rem;    
     num/=10;   
     
  }
  cout<<reverse; 
}
  int main()
  {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    numrev(num);

  }    
