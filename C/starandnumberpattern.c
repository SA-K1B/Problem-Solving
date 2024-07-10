#include<stdio.h>
int main()
{
  int i,j,k,x,n;
  scanf("%d",&n);
  printf("*\n");
  for(i=1;i<=n;i++){
        printf("*");
    for(j=1;j<=i;j++)
        printf("%d",j);
    for(j=i-1;j>=1;j--)
        printf("%d",j);
    printf("*\n");
  }
  for(i=n-1;i>=1;i--){
    printf("*");
    for(j=1;j<=i;j++)
        printf("%d",j);
     for(j=i-1;j>=1;j--)
        printf("%d",j);
         printf("*\n");
  }
  printf("*\n");
  return 0;
}
