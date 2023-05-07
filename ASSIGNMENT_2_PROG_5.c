#include <stdio.h>
int main()
{
    int n,s=0,c=0,n1;
    printf("Enter a three digit number ::\nN = ");
    scanf("%d",&n);
    n1=n;
    for(;n != 0;)
        {
        n = n / 10;
        ++c;
        }
    if(c==3)
    {
        while (n1!=0)
        {
            s=s+(n1%10);
            n1/=10;

        }
        printf("The Sum of the Digits of the input number is = %d",s);
    }
    else
    {

        printf("Sorry !! The number of digits are not three, it is %d digit number so give your input again",c);
        exit(0);
    }
    return 0;
}
