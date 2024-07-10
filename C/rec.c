#include<stdio.h>
int cnt=1;
void rec(int n){
  if(n==1)
    return;
  if(n%2){
    cnt++;
    rec(3*n+1);
  }
  else{
    cnt++;
    rec(n/2);
  }
}
int main()
{
    int n;
    scanf("%d",&n);
    rec(n);
    printf("%d",cnt);
    return 0;
}
