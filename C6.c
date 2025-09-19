// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=11;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=11;i++)
//     {
//         for(j=11;j>=i;j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=12;i++)
//     {
//         for(j=i;j<12;j++)
//         {
//             printf(" ");
//         }
//         for(k=1;k<=i;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// {
//     int i,j,k;
//     for(i=0;i<=26;i++)
//     {
//         for(j=26;j>i;j--)
//         {
//             printf("*");
//         }
//         // for(k=1;k<=i;k++)
//         // {
//         //     printf("*");
//         // }
//          printf("\n");
//     }
// }

// {
//     int i,j,k;
//     for(int i=0;i<28;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(int k=28;k>i;k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// {
//     int i,j,k;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j>i;j--)
//         {
//             printf(" ");
//         }
//         for(int k=3;k<i;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

   
    
    // {
    //     int num=65;
    //     for(int i=0;i<6;i++)
    //     {
    //         for(int j=0;j<=i;j++)
    //         {
    //         printf("%c",num++);
    //         }
    //          printf("\n");
    //     }
    // }

//    {
//         int num=97;
//         for(int i=0;i<7;i++)
//         {
//             for(int j=0;j<=i;j++){
//             printf("%c",num++);
//             }
//             printf("\n");
        
       
//     }


//        {
//     int i,j,k,p;
//     for(int i=0;i<7;i++)
//     {
//         for(int j=5;j>i;j--)
//         {
//             printf(" ");
//         }
//             for(int k=0;k<=i;k++)
//             {
//                 printf("*");
//             }
//             for(int p=1;p<=i;p++)
//             {
//                 printf("*");
//             }printf("\n");

//     }
// }

//#include<stdio.h>
//int main()
//// {
////     int i,j,k,p,h;
////     for(int i=0;i<5;i++)
////     {
////         for(int j=0;j<=i;j++)
////         {
////             printf(" ");
////         }
////             for(int k=4;k>=i;k--)
////             {
////                 printf("*");
////             }
////             for(int p=3;p>=i;p--)
////             {
////                 printf("*");
////             }
////             for(int h=1;h<=i;h++)
////             {
////               printf("*");
////             }
////             printf("\n");
//
////     }
//
//// {
////     int i,j,k,p,z;
////     for(int i=0;i<4;i++)
////     {
////         for(int j=0;j<=i;j++)
////         {
////         printf("*");
////         }
////         for(int k=4;k>i;k--)
////         {
////             printf(" ");
////         }
////         for(int p=4;p>i;p--)
////         {
////             printf(" ");
////         }
////         for(int z=0;z<=i;z++)
////         {
////             printf("*");
////         }
////         printf("\n");
////     }
//    
//// }
//
//
// #include <stdio.h>
// int main()
// {
//     for(int i =0;i<4;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("*");
//         }
//         for(int k=3;k>i;k--)
//         {
//             printf(" ");
//         }
//          for(int p=3;p>i;p--)
//         {
//             printf(" ");
//         }
//         for(int z=0;z<=i;z++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//      for(int i=0;i<4;i++)
//     {
//         for(int j=3;j>i;j--)
//         {
//             printf("*");
//         }
//         for(int k=0;k<=i;k++)
//         {
//             printf(" ");
//         }
//          for(int k=0;k<=i;k++)
//         {
//             printf(" ");
//         }
//          for(int j=3;j>i;j--)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }

// }


#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                printf("*");
            }else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


