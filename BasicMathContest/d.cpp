#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t,cnt=0;
    double x,w,l,r,a,k;
    cin>>t;
    while(t--){
       printf("Case %d: ",++cnt);
       cin>>w>>l;
       x=((w+l)-(sqrt(w*w+l*l-w*l)))/6;
       a=x*(l-2*x)*(w-2*x);
       printf("%lf\n",a);
    }
    return 0;
}
