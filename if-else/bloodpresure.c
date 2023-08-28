#include<stdio.h>
void main()
{
    int n1,n2;
    float a;
    
    printf("Enter your blood pressure:");    
    scanf("%f",&a);   
    if(a>80 && a<120)
    {

        printf("Normal");
    }
    else if(a>=120 && a<=129)
    {
        
        printf("Elevated");
    }
     else if(a>=130 && a<=139)
    {
        
        printf("systolic");
    }
    else if(a>140)
    {
        
        printf("Higher");
    }
    else
    {
        printf("Enter correct point");
    }
    
}