/*recursive funtion
f(x)=0   if x<=0
f(x-1)+2  otherwise
*/
#include<stdio.h>
int function(int x)
{
    
    if (x<=0)
    {
        
        return 0;

    }else
   return (function(x-1)+2);
    
}
int main()
{
    int x;
    printf("x degeri giriniz:\n");
    scanf("%d",&x);
    int sonuc;
    sonuc=function(x);
    printf("sonuc=%d",sonuc);
    return 0;
    
}