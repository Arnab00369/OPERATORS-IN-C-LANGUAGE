#include <stdio.h>
int main()
{
    int n,n1;
    printf("Enter a number ::\nN = ");
    scanf("%d",&n);
    n1=n;
    n=(n/10)*10;
    printf("\nTherefore, the number %d has changed into %d ",n1,n);
    return 0;
}
