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
bool cmp(pair<char,ll>x,pair<char,ll>y){
    return (x.second>y.second);
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
   // getchar();
    while(t--){
    string s1;
    cin>>s1;
    ll sz=s1.size();
    vector <pair<char,ll> > v;
    ll j=0;
    while(j<sz){
      if(v.empty()||s1[j]!=v.back().first){
         v.pb({s1[j],1});
        }
        else{
            v.back().second++;
        }
        j++;
      }
      ll ans=1;
      sort(v.begin(),v.end(),cmp);
      for(auto [f,s]: v){
           //cout<<f<<' '<<s<<endl;
        if(f=='L'){
            ans=s+1;
            break;
        }
      }
      cout<<ans<<endl;
  }
    return 0;
}

