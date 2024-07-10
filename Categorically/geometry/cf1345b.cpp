#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mx=1000000000;
    ll t;
   // cin>>t;
    vector <ll> v;
    ll h=0,i=1;
    while(1){
        ll x1=i*(i+1);
        ll x2=i*(i-1)/2;
        ll s=x1+x2;
        if(x1+x2<=mx)
            v.pb(s);
        else break;
        i++;
    }
   // for(auto it:v)
       // cout<<v[0]<<endl;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    auto p=lower_bound(v.begin(),v.end(),n)-v.begin();
   // cout<<p<<endl;
    if(v[p]==n)
        cout<<"1"<<endl;
    else{
        ll cnt=0;
        while(n>=2){
        p=lower_bound(v.begin(),v.end(),n)-v.begin();
          if(v[p]==n)
            n-=v[p];
          else{
          p--;
          n-=v[p];
          }
          cnt++;
        }
        cout<<cnt<<endl;
    }
  }
    return 0;
}

