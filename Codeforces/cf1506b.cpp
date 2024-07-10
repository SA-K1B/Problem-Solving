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
  ll n,k;
   cin>>n>>k;
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
  string s1;
  cin>>s1;
  ll cnt=1;
  ll j=0,i;
  while(j<n){
    if(s1[j]=='*'){
        i=j;
        break;
    }
    j++;
  }
  while(j<n){
    ll x=j+k;
    if(x>=n){
         //   cout<<y<<' ';
           x=n-1;
            while(x>j){
                if(s1[x]=='*'){
                    cnt++;
                    break;
                }
                x--;
            }
            cout<<cnt<<endl;
            return;
        }
    while(s1[x]!='*'){
        x--;
        if(x==j){
         //   cout<<y<<' ';
            cout<<cnt<<endl;
            return;
        }
    }
    cnt++;
    j=x;
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
        //cout<<' ';
        solve();
    }
    return 0;
}



