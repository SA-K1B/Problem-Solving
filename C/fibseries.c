
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int c,a=1,b=1;
    if(n==1)
       printf("%d",a);
       else{
     for(i=2;i<=n;i++){
         printf("%d ",a);
         c=a+b;
         a=b;
         b=c;
     }
     printf("%d",a);
 }
    return 0;
}

