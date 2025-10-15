#include <stdio.h>
int main()
{
    //scanf("%d",&n);
int n;
int i;
scanf("%d",&n);
if (n<=1)
{ 
    printf("yeh prime no nhi haiiii ");
}
for(i=2;i<n;i++)
{
    if (n%i==0)
    printf ("yeh prime no nhi haii");

}
}