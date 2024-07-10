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
  ll n;
  cin>>n;
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
  string s1;
  cin>>s1;
  if(s1[0]=='>'||s1[n-1]=='<'){
    cout<<"0"<<endl;
    return;
  }
  char fch=s1[0];
  ll cnt1,j=1;
  while(j<n){
    if(fch!=s1[j]){
        break;
    }
    j++;
  }
  cnt1=j;
  char fch2=s1[n-1];
  ll cnt2;
  j=n-2;
  while(j>=0){
    if(fch2!=s1[j]){
        break;
    }
    j--;
  }
  cnt2=(n-j-1);
  if(cnt1==n){
    cout<<"0"<<endl;
    return;
  }
  cout<<min(cnt1,cnt2)<<endl;
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



