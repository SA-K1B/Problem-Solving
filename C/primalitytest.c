#include<stdio.h>
int main()
{
    int f,x,y,a,b,i,j,k,n;
    scanf("%d",&n);
    f=0;
    if(n==1){
        printf("no");
        return 0;
    }
    for(j=2;j*j<=n;j++){
    if(n%j==0){
    f=1;
    break;
    }
   }
    if(f==0)
    printf("yes");
    else
    printf("no");
  return 0;
}
