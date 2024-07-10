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
   int m,n,i,j;
   cin>>n>>m;
   int a[n+3][m+3];
   /*vector <ll> a(n+5);
   for(i=0;i<n;i++){
    cin>>a[i];
   }*/
   int mx=Min;
   for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      cin>>a[i][j];
      mx=max(mx,a[i][j]);
    }
   }
   int f=0;
   for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      if(a[i][j]==mx){
        f=1;
        break;
      }
   }
   if(f)
    break;
  }
  int x=max(i,n-i+1);
  int y=max(j,m-j+1);
  cout<<x*y<<endl;
 // string s;
 // cin>>s;
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

