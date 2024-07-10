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
   cin>>n;
   vector <int> a(n+5);
   for(i=0;i<=n;i++){
    cin>>a[i];
   }
   if(n&1){
    int xr=0;
    for(i=0;i<=n;i++){
     xr^=a[i];
    }
    int f=0;
    for(i=0;i<=n;i++){
    if(f==0&&a[i]==xr){
       f=1;
       continue;
      }
      int ans=a[i]^xr;
      cout<<ans<<' ';
    }
   }
   else{
    for(i=1;i<=n;i++){
    int ans=a[0]^a[i];
      cout<<ans<<' ';
    }
   }
   cout<<endl;
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
