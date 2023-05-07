#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two Numbers ::\nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("\nThe Swapped values of Input Numbers are :: A = %d and B = %d",a,b);
    return 0;
}


