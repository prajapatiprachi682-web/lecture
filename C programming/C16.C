#include<stdio.h>
int main()
{
 int i,j,n;
 n=5;
 for(i=0; i<n;i++)
 {
    for(j=0;j<i;j++)
    {
        printf(" ");
    for(j=1;j<n;j++)
    {
    printf("*");
    }
    printf("*");
    printf("\n");
 }
 
}

return 0;
}