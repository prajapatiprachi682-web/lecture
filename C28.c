#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<=i;j++)
    {
            printf("*");
    }
       
    for(int k=3;k>i;k--)
    {
            printf(" ");
    }
    for(int k=3;k>i;k--)
    {
            printf(" ");
    }
    for(int p=0;p<=i;p++)
    {
            printf("*");
    }
        printf("\n");
    }
}