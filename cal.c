#include <stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("1.sum\n,2.substract\n,3.product\n,4.devision\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter two numbers:");
    scanf("%f,%f",&a,&b);
    switch (choice)
    {
        case 1:
        printf("sum=%2f\n",a+b);
        break;

        case 2:
        printf("substract=%2f\n",a-b);
        break;

        case 3:
        printf("product=%2f\n",a*b);
        break;

        case 4:
        printf("division=%2f\n",a/b);
        break;
    }
}