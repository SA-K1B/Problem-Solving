#include<stdio.h>
int main()
{
    int n=25,sum=0;
    dog:
      sum+=6;
    if(sum<=n)
        goto dog;
    printf("%d",sum);
   return 0;
}
