#include <stdio.h>
int main()
{
    int intType;
    float floatType;
    char charType;
    double doubleType;
    printf("Size of Integer Type Variable is = %zu bytes\n",sizeof(intType));
    printf("Size of Float Type Variable is = %zu bytes\n",sizeof(floatType));
    printf("Size of Double Type Variable is = %zu bytes\n",sizeof(doubleType));
    printf("Size of Character Type Variable is = %zu byte\n",sizeof(charType));
    return 0;
}
