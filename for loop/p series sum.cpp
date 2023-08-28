#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float g1,cr,i,n,j;
    int ntrm,gpn;
    float sum=0;
   
   
    cout << " Input  the starting number of the G.P. series: ";
    cin >> g1;
    cout << " Input the number of items for  the G.P. series: ";
    cin >> ntrm;
    cout << " Input the common ratio of G.P. series: ";
    cin >> cr;
     
     sum=g1;
     for(j=1;j<ntrm;j++)
       {
        gpn=g1*pow(cr,j);
        sum=sum+gpn;
        cout<<gpn<<"  ";
       }  
         cout<<"\n The Sum of the G.P. series:  "<<sum<<endl;	
}
