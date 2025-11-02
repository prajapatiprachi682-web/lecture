//bits magic

#include<stdio.h>

int main()
{
    int n=500000;
    if(n&001)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
}