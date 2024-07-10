#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[10000005],a[10000005];
void factor(){
    ll mx=10000000;
    for(ll i=2;i<=mx;i++){
       if(f[i]==0){
          f[i]=i;
          for(ll j=i*i;j<=mx;j+=i){
                if(f[j]==0)
                    f[j]=i;
        }
     }
     a[i]=a[i-1]+f[i];
  }
}
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    factor();
    while(t--){
        ll n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
