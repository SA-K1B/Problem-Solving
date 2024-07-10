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
vector <int> a[200005];
vector <int> b[200005];
void solve()
{
   int n,i,j,q;
   cin>>n;
   cin>>q;
   for(i=0;i<q;i++){
    int c;
    cin>>c;
    if(c==1){
      int x,y;
       cin>>x>>y;
       a[x].pb(y);
       b[y].pb(x);
    }
    else if(c==2){
      int x;
      cin>>x;
      sort(b[x].begin(),b[x].end());
      for(auto k: b[x])
      cout<<k<<' ';
      cout<<endl;      
    }
    else{
      int x;
      cin>>x;
      sort(a[x].begin(),a[x].end());
      auto last=unique(a[x].begin(),a[x].end());
      a[x].erase(last,a[x].end());
      for(auto k: a[x])
      cout<<k<<' ';
      cout<<endl;      
    }
   }
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
