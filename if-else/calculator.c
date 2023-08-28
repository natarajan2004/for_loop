#include<stdio.h>
void main()
{
    int n1,n2,ans;
    //char a[]="Add", b[]="Sub", c[]="Multiply", d[]="Division";
    char a[10];
    printf("Enter the number to check prime:");    
    scanf("%d %d",&n1,&n2);   
    printf("Enter the command:");
    scanf("%s", &a);
    {
        ans=n1+n2;
        printf(ans);
    }
    else if(a[10]=="sub")
    {
        ans=n1-n2;
        printf(ans);
    }
     else if(a[10]=="multiply")
    {
        ans=n1*n2;
        printf(ans);
    }
    else if(a[10]=="divide")
    {
        ans=n1/n2;
        printf(ans);
    }
}