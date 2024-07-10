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
   map <string,int>mp;
   int n,mx=Min;
   cin>>n;
   vector <string> vs(n+5);
   vector <int> v(n+5);
   for(int i=0;i<n;i++){
    cin>>vs[i]>>v[i];
    mp[vs[i]]+=v[i];
    //cout<<mp[vs[i]]<<endl;
   // cout<<mx<<endl;
   }
   for(auto it: mp){
    mx=max(it.second,mx);
   }
   //cout<<mx<<endl;
   string ans;
   map <string,int>mp1;
   for(int i=0;i<n;i++){
    mp1[vs[i]]+=v[i];
   // cout<<mx<<' '<<mp1[vs[i]]<<endl;
    if(mp1[vs[i]]>=mx && mp[vs[i]]==mx){
      ans=vs[i];
      break;
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
    //cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
