#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll isprime[10000005],ans[10000005];
void sieve(){
    ll mx=10000000;
    for(ll i=3;i*i<=mx;i+=2){
            if(isprime[i]==0){
        for(ll j=i*i;j<=mx;j+=2*i){
           isprime[j]=1;
        }
      }
    }
    ans[2]=1;
    ans[3]=2;
    ans[4]=1;
    for(ll i=5;i<=mx;i++){
        if(i%2==0&&((i/2)%2!=0)&&isprime[i/2]==0){
         //   cout<<"f"<<endl;
            ans[i]=ans[i-1]-1;
        }
        else if((i%2!=0)&&isprime[i]==0){
          //  cout<<"m"<<endl;
            ans[i]=ans[i-1]+1;
        }
        else {
          //  cout<<"l"<<endl;
                ans[i]=ans[i-1];}
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    ll t;
    cin>>t;
    sieve();
    while(t--){
      ll n;
      cin>>n;
      cout<<ans[n]<<endl;
    }
     return 0;
}
