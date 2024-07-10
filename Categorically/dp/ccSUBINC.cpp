#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  int n;
   cin>>n;
   vector <ll> a(n+5),dp(n+5);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   dp[0]=1;
    for(int i=1;i<n;i++){
      if(a[i]>=a[i-1])
        dp[i]=dp[i-1]+1;
      else dp[i]=1;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=dp[i];
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

