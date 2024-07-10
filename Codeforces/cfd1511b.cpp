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
  ll a1,b,c;
   cin>>a1>>b>>c;
   /*for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  ll a[10];
  a[1]=5;
  a[2]=11;
  a[3]=223;
  a[4]=1019;
  a[5]=10009;
  a[6]=100019;
  a[7]=1000033;
  a[8]=10000019;
  a[9]=999999937;
    if(a1==c){
        cout<<a[c]<<' ';
 }
    else{
        ll x=a[c];
        while(1){
        x*=2;
        ll p=x,cnt=0;
        while(p>0){
           p/=10;
           cnt++;
        }
        if(cnt==a1){
            cout<<x<<' ';
            break;
        }
     }
 }
  if(b==c){
        cout<<a[c]<<' ';
    }
    else{
        ll x=a[c];
        while(1){
        x*=3;
        ll p=x,cnt=0;
        while(p>0){
           p/=10;
           cnt++;
        }
        if(cnt==b){
            cout<<x<<' ';
            break;
        }
      }
  }
  cout<<endl;
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
 // string s1;
 // cin>>s1;
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



