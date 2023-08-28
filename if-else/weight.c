#include<stdio.h>
void main()
{
    int n1,n2;
    float weight;
    
    printf("Enter your weight:");    
    scanf("%f",&weight);   
    if(weight<18.5)
    {

        printf("Under weight");
    }
    else if(weight>=18.5 && weight<=24.9)
    {
        
        printf("Normal weight");
    }
     else if(weight>=25 && weight<=29.9)
    {
        
        printf("Over weight");
    }
    else
    {
        
        printf("Obese");
    }
    
}