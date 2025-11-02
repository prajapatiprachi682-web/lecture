#include<stdio.h>
int main()
{
    int a=5;
    int b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("enter number after swapping",a);
    printf("enter number before swapping",b);
}
