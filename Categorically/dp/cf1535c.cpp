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
  int n,i,j;
  string s;
  cin>>s;
  n=s.size();
  int dp[200003][2];
  //dp[0][1]=0;
 // dp[0][0]=0;
  for(i=0;i<n;i++){
    if(s[i]=='?'){
        if(i==0){
          dp[0][1]=1;
          dp[0][0]=1;
          continue;
        }
        dp[i][1]=dp[i-1][0]+1;
        dp[i][0]=dp[i-1][1]+1;
    }
   else if(s[i]=='1'){
        if(i==0){
          dp[0][1]=1;
          dp[0][0]=0;
          continue;
        }
        dp[i][1]=dp[i-1][0]+1;
        dp[i][0]=0;
    }
    else{
        if(i==0){
          dp[0][1]=0;
          dp[0][0]=1;
          continue;
        }
        dp[i][0]=dp[i-1][1]+1;
        dp[i][1]=0;
    }
  }
    ll ans=0;
  fr(i,n,0)
    ans+=(ll)max(dp[i][0],dp[i][1]);
    cout<<ans<<endl;
}
int main()
{
    fast;
    //freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
