// #include <stdio.h>
// int main()
// {
//    int a=11;
//    int  b=21;
//      if(a%2==0 )
//      {
//         printf("even");
//       }else
//         {
//            printf("odd");  
//         }
//      }
      

     #include <stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",& num);
    switch (num %2)
    { 
        case 1:
        printf("even\n");
        break;

        case 2:
        printf("odd\n");
        break;
    }
}
