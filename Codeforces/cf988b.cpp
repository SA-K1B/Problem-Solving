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
bool check(string a,string b)
{
    ll j;
    for(ll i=0;i<b.size();i++){
            ll k=i;
        for(j=0;j<a.size();j++){
            if(b[k]!=a[j])
                break;
            else k++;
        }
        if(j==a.size())
            return true;
    }
  //  cout<<a<<' '<<b<<endl;
    return false;
}
void solve()
{
  ll n;
  cin>>n;
  vector <pair<ll,string>> mp;
  ll temp=n;
  while(temp--){
    string s1;
    cin>>s1;
    ll sz=s1.size();
    mp.pb({sz,s1});
  }
  sort(mp.begin(),mp.end());
  ll f=0;
  for(auto it=0;it<mp.size()-1;it++){
    auto it2=it+1;
    if(!check(mp[it].second,mp[it2].second)){
        f=1;
        break;
    }
  }
  if(f)
    cout<<"NO"<<endl;
  else {
        cout<<"YES"<<endl;
        for(auto [f,s]:mp)
            cout<<s<<endl;
  }
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
