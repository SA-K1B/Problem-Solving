#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n==1){
    printf("2");
    return 0;
   }
   int i,j,cnt=2;
   for( i=3;;i++){
    int x=i,f=0;
   for( j=2;j*j<=x;j++){
   if(x%j==0){
   f=1;
  break;
  }
}
if(!f){
if(cnt==n){
printf("%d",x);
break;
}
else cnt++;
}
}
  return 0;
}
