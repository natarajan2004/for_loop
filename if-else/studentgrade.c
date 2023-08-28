#include<stdio.h>
void main()
{
int n1,n2,n3,n4,n5,avg;
printf("Enter your marks:");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5); 
avg=(n1+n2+n3+n4+n5)/5;
if(avg>=40)
{
    printf("Pass");
}
else{
    printf("fail");
}
}