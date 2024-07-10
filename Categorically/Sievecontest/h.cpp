#include<bits/stdc++.h>
#define ll long long
ll isprime[1000005],cnt=1,ans[1000005];
using namespace std;
void sieve(){
   ll mx=1000000;
   for(ll i=3;i*i<=mx;i+=2){
    if(isprime[i]==0){
        for(ll j=i*i;j<=mx;j+=2*i){
        isprime[j]=1;
        }
      }
   }
   for(ll i=3;i<=mx;i++){
    if(isprime[i]==0&&(i%2!=0))
      cnt++;
    ans[i]=cnt;
   }
}
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    sieve();
    while(t--){
    ll n;
    cin>>n;
    if(n<4){
       cout<<n<<endl;
    }
    else{
        cout<<ans[n]<<endl;
    }
  }
   return 0;
}
