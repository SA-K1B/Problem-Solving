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
vector <ll> res;
void pre(){
    ll n,i,j,k,x,mx=20050;
    res.push_back(2);
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
            res.push_back(i);
    }
}
void solve()
{
   ll n;
   cin>>n;
   /*string s1;
   cin>>s1;
   vector <ll> v;
   vector<ll> res;
   vector <pair<ll,ll>> vp;*/
   /*for(ll i=0;i<n;i++)
    cin>>a[i];*/
   auto pos1=lower_bound(res.begin(),res.end(),1+n)-res.begin();
   auto pos2=lower_bound(res.begin(),res.end(),res[pos1]+n)-res.begin();
  // cout<<res[pos1]<<' '<<res[pos2]<<endl;
   cout<<res[pos1]*res[pos2]<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    pre();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}

