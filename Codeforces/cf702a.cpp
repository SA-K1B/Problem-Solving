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
   vector <ll> a(n+5),b(n+3,1);
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   if(n==1){
    cout<<"1"<<endl;
    return;
   }
   ll ans=0;
  for(i=1;i<n;i++){
    if(a[i]>a[i-1])
    b[i]+=b[i-1];
    ans=max(ans,b[i]);
  }
  cout<<ans<<endl;
}
int main()
{
    fast;
  //  freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

