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
ll powr(ll a,ll b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   ll res=1;
   while(b>0){
    if(b&1){
        res=mul(res,a);
    }
    b/=2;
    a=mul(a,a);
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
  int n;
   cin>>n;
   vector <pair<int,int>> v;
   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.pb({x,y});
   }
   int l,p;
   cin>>l>>p;
   for(int i=0;i<n;i++){
      v[i].first=l-v[i].first;
   }
   sort(v.begin(),v.end());
   priority_queue <int,vector <int>> pq;
   int cp=p,ans=0;
  for(int i=0;i<n;i++){
     int x=v[i].first;
     int y=v[i].second;
     if(cp>=l){
        cout<<ans<<endl;
        return;
     }
       while(cp<x){
        if(pq.empty()){
            cout<<"-1"<<endl;
            return;
        }
        int tp=pq.top();
        cp+=tp;
        pq.pop();
        ans++;
       }
     pq.push(y);
  }
  while(!pq.empty()){
   cp+=pq.top();
   pq.pop();
   ans++;
   if(cp>=l){
    cout<<ans<<endl;
    return;
   }
  }
  cout<<"-1"<<endl;
  return;
  //ll  a[100005];
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




