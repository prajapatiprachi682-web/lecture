#include<stdio.h>
int main (){
    int i, j, temp;
    int arr[5]={5,4,3,2,1};
    for(i=0;i<5; i++)
    {
        for(int j=i+1;j<5; j++)
        {
          if (arr[i]>arr[j])
          {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }  
        }
    }
    for(i=0;i<5; i++)
        printf("%d ", arr[i]);
    return 0;
}