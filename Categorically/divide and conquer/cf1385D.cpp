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
string s1;
ll cost(ll l1,ll r1,char ch1){
  //  cout<<ch1<<endl;
   ll cnt=0;
   for(ll i=l1;i<=r1;i++){
    if(s1[i]!=ch1)
        cnt++;
   }
   //cout<<ch1<<' '<<cnt<<endl;
   return cnt;
}
ll check(ll l,ll r,char ch)
{
   // cout<<l<<' '<<r<<' '<<ch<<endl;
    if(l==r){
        if(s1[l]==ch)
          return 0;
         return 1;
    }
    ll mid=(l+r)/2;
    //cout<<ch<<endl;
    ll k1=cost(l,mid,ch);
    ll k2=cost(mid+1,r,ch);
    return min(k1+check(mid+1,r,ch+1),k2+check(l,mid,ch+1));
}
void solve()
{
  ll n;
  cin>>n;
  cin>>s1;
  ll ans=check(0,n-1,'a');
  cout<<ans<<endl;
   /*vector <ll> v;
   vector<ll> res;
   vector <pair<ll,ll>> vp;
   for(ll i=0;i<n;i++)
    cin>>a[i];*/
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
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


