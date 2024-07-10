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
   int n,m,i,j;
   cin>>n>>m;
  // cout<<n;
   vector <int> a(n+5),b(m+5);
   vi c;
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<m;i++){
    cin>>b[i];
   }
   for(i=0;i<n;i++)
    c.pb(a[i]);
   for(j=0;j<m;j++)
   c.pb(b[j]);
   srt(c);
   for(i=0;i<n;i++){
    int pos=lower_bound(c.begin(),c.end(),a[i])-c.begin();
    cout<<pos+1<<' '; 
   }
   cout<<endl; 
   for(j=0;j<m;j++){
    int pos=lower_bound(c.begin(),c.end(),b[j])-c.begin();
    cout<<pos+1<<' '; 
   }
   cout<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
