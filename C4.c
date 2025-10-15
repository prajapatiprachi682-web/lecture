// #include<stdio.h>
// int main(){
//     int n;
//     int i;
//       printf("enter a prime number:");
//         scanf("%d",&n); 
//        for(int i=2; i<n;i++){
//         if(n%i==0){
//             printf("prime number  nahi hai");
//         } else{
//             printf("prime number  hai");
//         }
//       return 0;

//     }

// }


#include<stdio.h>
int main()
{
  int a,b=0;
  printf("Enter Number to check:");
  scanf("%d", &a);
  if(a==1)
  {
    printf("Not Prime");
  }
  else{}
  for(int i=2; i<a/2; i++)
  {
    if(a%i==0)
    {
      b++;
    }
  }
}
if(b!=0)
{
  printf("Number is not Prime");
}
else
{
  printf("Number is Prime");
}
return 0;

// #include <stdio.h>

// int main()
// {
//     int a, b = 0;
//     printf("Enter number to check: ");
//     scanf("%d", &a);

//     if (a <= 1)
//     {
//         printf("Not Prime\n");
//         return 0;
//     }

//     for (int i = 2; i <= a / 2; i++)
//     {
//         if (a % i == 0)
//         {
//             b++;
//             break;  // एक बार divisible मिलने पर loop से बाहर निकल जाओ
//         }
//     }

//     if (b != 0)
//     {
//         printf("Number is not Prime\n");
//     }
//     else
//     {
//         printf("Number is Prime\n");
//     }

//     return 0;
// }
