#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&n);
    printf("Enter a Digit which you want to append ::\nDigit = ");
    scanf("%d",&a);
    n=n*10+a;
    printf("Therefore, the New Number after Append is = %d",n);
    return 0;
}
