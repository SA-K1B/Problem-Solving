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
  ll n,i,j,k;
   cin>>n>>k;
   ll mx=(k*2+1);
   if(mx>=n){
        cout<<"1"<<endl;
    cout<<(ll)ceil(n/2.0)<<endl;
    return;
   }
   ll lgbe=(ll) ceil((n*1.0)/mx);
   ll l=k+1;
   ll r=l;
   ll rem=n-((lgbe-2)*mx)-(2*k+2);
   l+=(ll) ceil(rem/2.0);
   r+=rem/2;
   cout<<lgbe<<endl;
   cout<<l-k<<' ';
   j=lgbe-2;
   ll y=(ll) ceil(mx/2.0);
   while(j--){
    l+=y;
    cout<<l<<' ';
    l+=k;
   }
   cout<<n-(r-k)+1<<endl;
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

