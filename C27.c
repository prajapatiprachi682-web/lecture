//DMA - Dynamic Memory Allocation


// #include<Stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("Enter size:");
//     scanf("%d",&n);
//     int *arr=(int *)malloc(n*sizeof(int));
//     //int *arr=(int *)calloc(n, sizeof(int));
//     printf("Enter %d elements:\n",n);
//     for(int i=0; i<n; i++)
//     scanf("%d", &arr[i]);
    
// }


#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
     printf("enter size:");
     scanf("%d",&n);
     int *arr = (int *) malloc(n * sizeof(int));
     //int arr=(int)calloc(n,sizeof(int));
     printf("enter %d element:\n", n);
     for(int i=0; i<n; i++)
     scanf("%d",&arr[i]);
     //free (arr);  
}                                            