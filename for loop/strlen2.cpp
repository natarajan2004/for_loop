#include <stdio.h>
int main() 
{
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i]; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
