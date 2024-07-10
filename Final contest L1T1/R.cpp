#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,drinks[110];
    double r;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&drinks[i]);
        s+=drinks[i];
    }
    n=n*100;
    r=(double)s/n*100;
    printf("%.12lf\n",r);
    return 0;
}

 
