 #include <stdio.h>

 int main()
 {


    int a=76;
    int m=78;
     if(a>75 && m>75  )
     {
        printf("A");
     }else if(a>75 && m>65 && m<75)
     {
         printf("B");

     }else if(a>75  && m<65 && m>50 )
     {
        printf("C");
    }else if (a>75 && m<50 && m>33)
    {
            printf("D");
    }
         else{
             printf("aapka kuch nhi sakta");
   }
}