#include<stdio.h>
void main()
{
    int n1,n2;
    float temp;
    
    printf("Enter your temperature:");    
    scanf("%f",&temp);   
    if(temp>=37.5)
    {

        printf("Fever");
    }
    
    else
    {
        
        printf("No fever");
    }
    
}