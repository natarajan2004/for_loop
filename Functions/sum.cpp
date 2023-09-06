#include <iostream>  
using namespace std;  
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int num1, num2,sum;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;
    sum=add(num1,num2);
    cout<<"The sum is:"<<sum;
    return 0;
}