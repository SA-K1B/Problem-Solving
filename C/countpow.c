#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int mul=1;
  for(i=1;i<=n;i++){
  mul*=2;
  }
  printf("%d\n",mul);
  float rev;
  rev=(float)1/mul;
  printf("%f",rev);

  return 0;
}
