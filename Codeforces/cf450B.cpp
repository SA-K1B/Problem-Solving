#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define mod 1000000007
using namespace std;
ll x,y,n;
ll call(ll g,ll h){
     if(g&1){
        if(h==1)
            return -x;
        else return -y;
     }
      else{
        if(h==1)
            return x;
        else return y;
     }
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y>>n;
    ll a=n/3;
    ll rem=n%3;
    if(rem==0){
        a=a-1;
        if(a&1){
            ll ans=((-y+x)%mod+mod)%mod;
            cout<<ans<<endl;
        }
        else{
             ll ans=((y-x)%mod+mod)%mod;
              cout<<ans<<endl;
        }
    }
    else{
           ll res=call(a,rem);
            ll ans=((res)%mod+mod)%mod;
            cout<<ans<<endl;
    }
    return 0;
}

