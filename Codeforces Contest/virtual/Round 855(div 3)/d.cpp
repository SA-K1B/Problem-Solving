#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define fr(i,n,j) for(i=j;i<n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
   ll n,i,j;
   cin>>n;
   set<ll> st;
   vector <pair<ll,ll>> v;
   for(i=1;i<=n;i++){
   ll x;
   cin>>x;
   if(x==0)
     st.insert(i);
   else v.pb({x,i});
   }
   srt(v);
   rv(v);
   ll ans=0;
   for(i=0;i<v.size();i++){
      if(st.empty())
        break;
      ll k=v[i].second;
      auto pos=st.lower_bound(k);
      if(pos!=st.end()){
        ans+=v[i].first;
        st.erase(pos);
      }
   }
   cout<<ans<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
