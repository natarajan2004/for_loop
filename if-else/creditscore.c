#include<stdio.h>
void main()
{
    int n1,n2;
    int a;
    
    printf("Enter your score:");    
    scanf("%f",&a);   
    if(a<600)
    {

        printf("Poor score");
    }
    else if(a>=600 && a<=699)
    {
        
        printf("Fair credit");
    }
     else if(a>=700 && a<=799)
    {
        
        printf("Good credit");
    }
    
    
    else if(a>800)
    {
        
        printf("Excellent credit");
    }
    
}

