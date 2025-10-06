#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="mmnnkk";
    int count=0;
    int ln= strlen(str);
    for(int i=0;i<ln-1;i++)
    {
        for(int j=i+1;j<ln;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
    }
    // char str[]="madam";
    // int ln= strlen(str);
    // int isTrue=1;
    // for(int i=0;i<ln/2;i++)
    // {
    //     if(str[i]!=str[ln-i-1])
    //     {
    //         isTrue=0;
    //         break;
    //     }
    // }
    // if(isTrue==1)
    // {
    //   printf("palindrome");  
    // }
    // else
    // {
    //     printf("not palindrome");
    // }

//     char newstr[10];
//     int ln= strlen(str);
//     for(int i=0;str[i]!='\0';i++)
//     {
//         newstr[i]=str[i];
//         //printf("%c\n",str[i]);
//     }
//     printf("%c",str[0]);
//    // printf("%c",str[0]);
}