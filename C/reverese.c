#include<stdio.h>
int main()
{
   int n,i,j,x,k;
   scanf("%d",&n);
   int rev=0;
   x=n;
   while(x>0){
   rem=x%10;
   rev=(rev*0)+rem
   x/=10;   
   }
   printf("%d %d",n,x);

}