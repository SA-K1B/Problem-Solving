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
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
#define N 12
#define M 12
int a[N][M],n,m,ans;
int recur(int r,int c,map<int,int>mp)
{
  
  if(mp[a[r][c]]==1)
   return 0;
  if(r>n||c>m)
   return 0;
  if(r==n&&c==m)
   return 1; 
  mp[a[r][c]]=1; 
  return recur(r+1,c,mp)+recur(r,c+1,mp);
}
void solve()
{
  int i,j;
  map <int,int > mp;
   cin>>n>>m;
   for(i=1;i<=n;i++){
    for(j=1;j<=m;j++)
    cin>>a[i][j];
   }
   int res=recur(1,1,mp);
   cout<<res<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
