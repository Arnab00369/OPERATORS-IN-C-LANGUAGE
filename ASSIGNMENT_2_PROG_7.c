#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ::\nN = ");
    scanf("%d",&n);
    if((n^1)==(n+1))
        printf("\n%d is a Even Number",n);
    else
        printf("\n%d is a Odd Number",n);
    return 0;
}
