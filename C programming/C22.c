#include<stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int *p1=arr1;
    int *p2=arr2;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p1+i));
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p2+i));
    }

    return 0;
}