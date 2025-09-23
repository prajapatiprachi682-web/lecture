#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    int i=1;
    for(i=1;i<5;i++)
    {
       printf("%d",*(p+1));
    }
}