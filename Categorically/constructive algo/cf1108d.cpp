#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
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
  ll n;
   cin>>n;
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
  vector <pair<char,ll>> v;
  for(auto it: s1){
    if(v.empty()||it!=v.back().first)
      v.pb({it,1});
    else v.back().second++;
  }
  map <char,ll>mp;
  mp['R']=1;
  mp['G']=2;
  mp['B']=3;
  ll j,m=0,ans=0;
  for(ll i=0;i<v.size();i++){
    ll x=v[i].second;
    ll k1=mp[v[i].first];
    j=m;
    if(x/2){
        j++;
        while(j<m+x){
            ans++;
            if(i+1<v.size()){
                if(mp[v[i+1].first]+k1==3)
                    s1[j]='B';
                else if(mp[v[i+1].first]+k1==4)
                    s1[j]='G';
                if(mp[v[i+1].first]+k1==5)
                    s1[j]='R';
            }
            else{
                if(k1==3)
                    s1[j]='R';
                else if(k1==1)
                    s1[j]='B';
                if(k1==2)
                    s1[j]='R';
            }
            j+=2;
        }
    }
    m+=x;
  }
  cout<<ans<<"\n"<<s1<<endl;
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
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}




