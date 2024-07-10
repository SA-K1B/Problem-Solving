#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int fact=1;
    for(i=n;i>=1;i--){
        fact*=i;
    }
    printf("%d\n",fact);
    return 0;
}
