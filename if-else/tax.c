#include<stdio.h>
void main()
{
    int n1,n2;
    long tax;
    
    printf("Enter your income:");    
    scanf("%f",&tax);   
    if(tax<250000)
    {

        printf("No tax");
    }
    else if(tax>=250000 && tax<=800000)
    {
        
        printf("Low tax");
    }
     else if(tax>=800000 && tax<=1500000)
    {
        
        printf("Middle-income tax");
    }
    
    
    else if(tax>5000000)
    {
        
        printf("High tax");
    }
    
}

