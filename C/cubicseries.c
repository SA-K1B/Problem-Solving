#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    do{
        sum+=(i*i*i);
        i++;
    }while(i<=n);
    printf("%d",sum);
    return 0;
}
