// #include<stdio.h>
// #include<string.h>
//  int main()
//  {
//     char str[]="abcabccc";
//     int ln= strlen(str);
//     int freq[256]={0};
//     char result;
//     int max= 0;
//     for(int i=0;i<ln;i++)
//     {
//         freq[str[i]]++;
//     }
//     for(int i=0;i<ln;i++)
//     {
//         if(freq[str[i]]>max)
//         {
//             max=freq[str[i]];
//             result=str[i];
//         }
//     }
//     //printf("%c",result);
//     printf("%c->%d\n",result,max);
//  }


//  #include<stdio.h>
// #include<string.h>
//  int main()
//  {
//     char str[]="abcabccc";
//     char subStr[]="abc";
//     if(strstr(str, subStr)!=NULL)
//     {
//         printf("true");
//     }
//     else
//     {
//         printf("false");
//     }
// }


//     target="abc";
//     int ln= strlen(str);
//     int freq[256]={0};
//     char result;
//     int max= 0;
//     for(int i=0;i<ln;i++)
//     {
//         freq[str[i]]++;
//     }
//     for(int i=0;i<ln;i++)
//     {
//         if(freq[str[i]]>max)
//         {
//             max=freq[str[i]];
//             result=str[i];
//         }
//     }
//     //printf("%c",result);
//     printf("%c->%d\n",result,max);
//  }


 #include<stdio.h>
#include<string.h>
 int main()
 {
    char str[]="bca";
    int ln=strlen(str);
    for(int i=0;i<ln-1;i++)
    {
        for(int j=i+1;j<ln;j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s\n",str);
 }