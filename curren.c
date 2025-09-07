#include <stdio.h>
int main()
{
    int amount;
    printf("Enter a amount in indian ..");
    scanf("%d",&amount);

     char ch;
     printf("which you want to convert");
     scanf("%c",&ch);

     switch (ch)
    {
    case 1:
      printf("%f",(float)amount/87);
      break;
     case 2:
     0.87==1/87;
     default:
     break;
    }
}
    
