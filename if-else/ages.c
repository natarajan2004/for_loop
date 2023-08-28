#include<stdio.h>
void main()
{
    int n1,n2,age;
    
    printf("Enter your age:");    
    scanf("%d",&age);   
    if(age<18)
    {

        printf("Child");
    }
    else if(age>=18 && age<=65)
    {
        
        printf("Adult");
    }
     else 
    {
        
        printf("Senior");
    }
    
}