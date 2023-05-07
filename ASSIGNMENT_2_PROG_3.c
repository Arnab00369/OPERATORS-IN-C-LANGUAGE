#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two Numbers ::\n");
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nThe Swapped values of Input Numbers are :: A = %d and B = %d",a,b);
    return 0;
}

