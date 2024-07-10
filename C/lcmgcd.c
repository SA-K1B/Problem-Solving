#include<stdio.h>
int main()
{
   int r,a,b,x,y,gcd,i;
   scanf("%d%d",&a,&b);
    x=a,y=b;
   while(x!=0){
   r=y%x;
   y=x;
   x=r;
   }
   int lcm;
   gcd=y;
   lcm=(a*b)/gcd;
   printf("lcm=%d gcd=%d",lcm,gcd);
  return 0;
}
