#include<stdio.h>
int main()
{
    int f,sum=0,x,y,a,b,i,j,k,n,cnt=0;
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
    cnt++;
    if(cnt>n)
    break;
    sum+=x;
  }
 }
  printf("%d\n",sum);
  return 0;
}
