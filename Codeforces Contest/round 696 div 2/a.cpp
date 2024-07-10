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
void solve()
{
   ll n;
   cin>>n;
   string s1;
   cin>>s1;
   //vector <ll> v;
   vector<ll> res;
   ll x,j=0;
   while(j<n){
    if(j>0)
         x=res.back();
    ll cur=s1[j]-'0';
    if(res.empty()||cur+1!=x){
      cout<<"1";
      res.pb(cur+1);
    }
    else {
     cout<<"0";
     res.pb(cur+0);
    }
     j++;
   }
   cout<<endl;
   //vector <pair<ll,ll>> vp;
   /*for(ll i=0;i<n;i++)
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
     //   cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


