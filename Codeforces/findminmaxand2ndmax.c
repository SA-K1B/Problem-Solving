#include<stdio.h>
int main()
{
    freopen("i.txt","r",stdin);
    int n,a[1005],k,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int mn=a[0],mx=a[0];
    for(i=1;i<n;i++){
        if(a[i]<mn){
            mn=a[i];
        }
        if(a[i]>mx){
          mx=a[i];
        }
    }
    printf("%d %d\n",mn,mx);
    return 0;
}
