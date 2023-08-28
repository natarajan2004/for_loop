#include<stdio.h>
void main()
{
    int n1,n2;
    int a,b;
    
    printf("Enter your number of years experience:");    
    scanf("%f",&a);   
    printf("Enter your number age:");    
    scanf("%f",&b);   
    if(a<25 && b<1)
    {

        printf("Entry level");
    }
    else if((a>=25 && a<=40) && (b>=1 && b<=5))
    {
        
        printf("Junior");
    }
    else if((a>=40) && (b>=5 && b<=10))
    {
        
        printf("Senior");
    }
    
    
    else if((a>=40) && (b>=10))
    {
        
        printf("Senior");
    }
    
}

