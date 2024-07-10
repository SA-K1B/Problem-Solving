#include<stdio.h>
int main()
{
    int i,j,sp,k,x,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(sp=1;sp<=n-i;sp++)
            printf(" ");
        for(j=n;j>=1;j--){
            printf("%c",j+97-1);
        }
        printf("\n");
    }
    return 0;
}
