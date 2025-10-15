#include<stdio.h>
int main()
{
    int arr[5]={1,2,-3,4,-1};
    int maxsum=0;

    for(int i=0;i<5;i++)
    {
        int cursum=0;
        for(int j=i;j<5;j++)
        {
            cursum=cursum+arr[j];
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
        }
    }
    printf("%d",maxsum);
return 0;
}
