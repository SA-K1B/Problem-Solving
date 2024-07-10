#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
        ll a[200005],n;
        scanf("%lld",&n);
        for(ll i=0;i<n;i++)
            scanf("%lld",&a[i]);
            if(n==1){
                cout<<a[0]<<endl;
                continue;
            }
        ll pre=a[0],sum=0;
        for(ll i=1;i<n;i++){
            if((pre>=0&&a[i]>=0)||(pre<0&&a[i]<0)){
                if(i==n-1){
                    if(a[i]>pre)
                    sum+=a[i];
                   else sum+=pre;
                }
                else if(a[i]>pre){
                   pre=a[i];
                }
            }
            else{
                 if(i==n-1){
                    sum+=a[i]+pre;
                   }
                else {
                sum+=pre;
                pre=a[i];
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
