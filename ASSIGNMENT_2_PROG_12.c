#include <stdio.h>
int main()
{
    int n,c=0,s,n1;
    printf("Enter a three digit number ::\nN = ");
    scanf("%d",&n);
    n1=n;
    do
    {
        n/= 10;
        ++c;
    }
    while (n != 0);
    if(c!=3)
    {
        printf("ERROR!!!! Your input Number is not a Three Digit Number. It is a %d Digit Number",c);
        exit(0);
    }
    else
    {
       s=((n1%10)*(100))+(n1/10);
       printf("The Number with its Digits Shifted towards one position towards its Right is = %d",s);
    }
    return 0;
}
