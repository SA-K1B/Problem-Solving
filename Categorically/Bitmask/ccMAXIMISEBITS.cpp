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
  ll n,k,i,j;
   cin>>n>>k;
   ll a=k/n;
   ll mnb=log2(a);
   ll mn=(1ll<<mnb)-1;
   ll sum=n*mn;
   ll rem=k-sum;
   ll b=mnb+1;
   ll lgbe=((1ll<<b)-1)-mn;
   ll ase=rem/lgbe;
   ll ans=(ase*b)+((n-ase)*mnb);
   cout<<ans<<endl;
}
int main()
{
    fast;
   // freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

