

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int a,b,sum,point,durum;
     srand(time(NULL));
     a = 1 + rand() % 6;
     b = 1 + rand() % 6;
     sum = a + b;
     printf("sum: %d \n",sum);
     if (sum==7||sum==11)
     {
       printf("player wins!\n");
     }else if (sum==2||sum==3||sum==12)
     {
        printf("player loses!\n");
     }else{
        point=sum;
        printf("point is %d\n",point);
        durum =0;
     
        while (durum==0)
        {
             a = 1 + rand() % 6;
             b = 1 + rand() % 6;
             sum = a + b;
             printf("sum: %d \n",sum);
             if (sum==point)
             {
                printf("player wins!\n");
                durum=!0;
             }else if (sum==7)
             {
                  printf("Player loses!\n");  
                  durum=!0;
             }  
        }
     }
        return 0;
}  

 