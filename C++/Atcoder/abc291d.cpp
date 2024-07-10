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
#define M 998244353
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
int dp[200005][2];
void solve()
{
   int n,i,j;
   cin>>n;
   vector <ll> a(n+5),b(n+5);
   for(i=0;i<n;i++){
    cin>>a[i]>>b[i];
   }
   dp[0][0]=1;
   dp[0][1]=1;
   for(i=1;i<n;i++){
    if(a[i]!=a[i-1])
      dp[i][0]=(dp[i][0]+dp[i-1][0])%M;
    if(a[i]!=b[i-1])
      dp[i][0]=(dp[i][0]+dp[i-1][1])%M;
    if(b[i]!=a[i-1])
      dp[i][1]=(dp[i][1]+dp[i-1][0])%M;
    if(b[i]!=b[i-1])
      dp[i][1]=(dp[i][1]+dp[i-1][1])%M;
   }
   int ans=(dp[n-1][0]+dp[n-1][1])%M;
   cout<<ans<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
