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
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
   if(a.first==b.first)
    return a.second>b.second;
  else return a.first<b.first;
    //return true;
 //   else if(a.first==b.first)
   //     return a.second>b.second;
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll s1,n;
    cin>>s1>>n;
    vector<pair<ll,ll> > v;
    for(ll i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    ll f1=0;
    sort(v.begin(),v.end(),cmp);
    for(auto [f,s]: v){
      //  cout<<s1<<' '<<f<<' '<<s<<endl;
     if(s1<=f){
        f1=1;
        break;
     }
     s1+=s;
    }
    if(f1==0)
        puts("YES");
    else puts("NO");
    return 0;
}
