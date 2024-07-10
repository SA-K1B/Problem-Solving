#include<stdio.h>
int main()
{
    int n,s=0,drinks[110],i;
    double r;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&drinks[i]);
        s+=drinks[i];
    }
    n=n*100;
    r=(double)s/n*100;
    printf("%.12lf",r);
    return 0;
}
