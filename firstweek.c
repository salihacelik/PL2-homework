#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a,b,sonuc,puan;
    a=rand()%7;
    b=rand()%7;
    sonuc=a+b;
    printf("sonuc:%d\n",sonuc);
    if (sonuc==7&&sonuc==11)
    {
       printf("win");
    }
    else if (sonuc==2 && sonuc==3 && sonuc==12)
    {
       printf("lose");

    }
    else
    {
    puan = sonuc;
    a=rand()%7;
    b=rand()%7;
    sonuc=a+b;
    
    while (puan =! sonuc)
    {
         a=rand()%7;
         b=rand()%7;
         sonuc=a+b;

    }

    

    printf("win \nyour score : %d",puan);
    
    }
}