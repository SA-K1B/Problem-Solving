#include<stdio.h>
int main()
{
    int f,x,y,a,b,i,j,k,n;
    scanf("%d",&n);
    for(i=2;;i++){
    x=i;
    f=0;
    for(j=2;j*j<=x;j++){
    if(x%j==0){
    f=1;
    break;
    }
   }
    if(f==0){
    if(x>n)
    break;
    printf("%d ",x);
  }
 }
  return 0;
}

