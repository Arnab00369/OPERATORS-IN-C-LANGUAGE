#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number = ");
    scanf("%d",&a);
    b=a%10;
    printf("\nThe unit digit of the input number is = %d",b);
    return 0;
}
