#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 1000000000000000000
#define Min -1000000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll M=1000000007;
ll mod(ll x){
        return (x%M);
    }
ll add(ll a, ll b){
        return mod(mod(a)+mod(b));
    }
ll mul(ll a, ll b){
        return mod(mod(a)*mod(b));
    }
ll powr(ll a,ll b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   ll res=1;
   while(b>0){
    if(b&1){
        res*=a;
    }
    b/=2;
    a*=a;
  }
  return res;
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
}
ll is[1000000];
vector <ll> primes;
void primegen(){
    ll n,i,j,k,x,mx=1000000;
    primes.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0){
         for(ll j=i*i;j<=mx;j+=2*i){
          is[j]=1;
         }
       }
    }
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
void solve()
{
  ll k,n;
   cin>>n>>k;
   vector <ll> v;
   for(ll i=0;i<=32;i++){
    v.pb(powr(2,i));
   }
   ll sz=v.size();
   multiset<ll> st;
   ll val=n;
   for(ll i=sz-1;i>=0;i--){
     if(val>=v[i]){
        st.insert(v[i]);
        val-=v[i];
     }
   }
   ll rem=k-st.size();
   if(rem<0){
    cout<<"NO"<<endl;
    return;
   }
   while(rem){
     auto pos=st.end();
     pos--;
     ll x=*pos;
     if(x==1){
        cout<<"NO"<<endl;
        return;
     }
     st.insert(x/2);
     st.insert(x/2);
     st.erase(pos);
     rem--;
   }
   cout<<"YES"<<endl;
   for(auto it:st){
    cout<<it<<' ';
   }
   cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

