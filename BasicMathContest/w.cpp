#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        ll n,a[100005];
        cin>>n;
        for(ll i=0;i<n;i++)
        cin>>a[i];
        long long ans=0;
        for(ll j=31;j>=1;j--){
                ll cnt=0;
            for(ll i=0;i<n;i++){
                if((a[i]<ceil(pow(2,j)))&&(a[i]>=ceil(pow(2,j-1))))
                    cnt++;
            }
            ans+=((cnt*(cnt-1))/2);
        }
        cout<<ans<<endl;
    }
     return 0;
}
