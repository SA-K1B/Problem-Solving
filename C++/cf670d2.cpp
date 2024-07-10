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
bool ok(vector <ll> a,vector <ll>b,ll  mid,ll k,ll n){
   for(int i=0;i<n;i++){
    ll x=a[i]*mid;
    if(x>b[i]){
        ll d=x-b[i];
        if(k<d)
         return 0;
        k-=d;
    }
   }
   return 1;
}
void solve()
{
   ll n,i,j,k;
   cin>>n>>k;
   vector <ll> a(n+5),b(n+5);
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<n;i++){
    cin>>b[i];
   }
   ll l=0,h=2000000000,ans=Min;
   while(l<=h){
    ll mid=(l+h)/2;
   // cout<<l<<' '<<h<<' '<<mid<<endl;
    if(ok(a,b,mid,k,n)){
        ans=max(ans,mid);
        l=mid+1;
    }
    else 
       h=mid-1;
   }
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
