#include <stdio.h>
int main()
{
    float ind,usd;
    printf("Enter amount in INR ::\nRs. ");
    scanf("%f",&ind);
    usd=76.23*ind;
    printf("\nTherefore, the value of Amount in given INR in USD is = $ %.2f",usd);
    return 0;
}
