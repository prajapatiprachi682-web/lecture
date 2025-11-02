#include<stdio.h>
int palindrome(int arr[], int i, int j)
{
    if(i>=j)
    {
        return 1;
    }
    if(arr[i]!=arr[j])
    {
        return 0;
    }
    return palindrome(arr,++i,--j);
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (palindrome(arr, 0, n - 1))
        printf("Array is Palindrome\n");
    else
        printf("Array is Not Palindrome\n");

    return 0;
}
