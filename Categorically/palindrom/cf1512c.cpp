#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll M=1000000007;
ll mod(ll x){
        return ((x%M + M)%M);
    }
ll add(ll a, ll b){
        return mod(mod(a)+mod(b));
    }
ll mul(ll a, ll b){
        return mod(mod(a)*mod(b));
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
    //cout<<"2"<<endl;
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            //cout<<i<<endl;
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
         //   cout<<ans<<endl;
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
void solve()
{
  ll a,b;
   cin>>a>>b;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
  string s1;
    cin>>s1;
   ll len=a+b;
   if(len%2==0){
    if(a%2&&b%2)
        cout<<"-1"<<endl;
   }
   else{
    ll cnt0=0,cnt1=0;
    ll j=0;
    while(j<len/2){
       if(s1[j]=='0')
         cnt0++;
       else if(s1[j]=='1')cnt1++;
       j++;
     }
     if(a%2){
        if(cnt0>(a-1)/2){
            cout<<"a"<<"-1"<<endl;
            return;
        }
     }
     else{
         if(cnt0>a/2){
            cout<<"b"<<"-1"<<endl;
            return;
        }
     }
     if(b%2){
        if(cnt1>(b-1)/2){
            cout<<cnt1<<' '<<b<<"-1"<<endl;
            return;
        }
     }
     else{
         if(cnt1>b/2){
            cout<<"d"<<"-1"<<endl;
            return;
        }
     }
    cnt0=0;
    cnt1=0;
     j=len/2+1;
    while(j<len){
       if(s1[j]=='0')
         cnt0++;
       else if(s1[j]=='1')cnt1++;
       j++;
     }
     if(a%2){
        if(cnt0>(a-1)/2){
            cout<<"e"<<"-1"<<endl;
            return;
        }
     }
     else{
         if(cnt0>a/2){
            cout<<"f"<<"-1"<<endl;
            return;
        }
     }
     if(b%2){
        if(cnt1>(b-1)/2){
            cout<<"g"<<"-1"<<endl;
            return;
        }
     }
     else{
         if(cnt1>b/2){
            cout<<"h"<<"-1"<<endl;
            return;
        }
     }
   }
   j=0;
   ll i=len-1;
   if(len%2){
    if(a%2){
    if(s1[len/2]!=)
     }
   }
   while(j<len/2){
     if(s1[j]!='?'&&s1[i]!='?'){
        if(s1[j]!=s1[i]){
            cout<<"-1"<<endl;
            return;
        }
     }
   }
  //cin>>s1;
   //vector<ll> res;
   //vector <pair<ll,ll>> vp;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



