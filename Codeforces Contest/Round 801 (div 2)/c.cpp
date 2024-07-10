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
int a[1003][1003],mx[1003][1003],mn[1003][1003];
void solve()
{

  int n,i,j,m;
   cin>>n>>m;
   //vector <ll> a(n+5);
   for(i=1;i<=n;i++){
    for(j=1;j<=m;j++)
    cin>>a[i][j];
   }
   if(((n+m)&1)==0){
    no;
    return;
   }
   mx[1][1]=a[1][1];
   mn[1][1]=a[1][1];
   for(j=2;j<=m;j++){
    mx[1][j]=mx[1][j-1]+a[1][j];
    mn[1][j]=mn[1][j-1]+a[1][j];
   }
   for(j=2;j<=n;j++){
    mx[j][1]=mx[j-1][1]+a[j][1];
    mn[j][1]=mn[j-1][1]+a[j][1];
   }
   for(i=2;i<=n;i++){
    for(j=2;j<=m;j++){
      mx[i][j]=max(mx[i-1][j],mx[i][j-1])+a[i][j];
      mn[i][j]=min(mn[i-1][j],mn[i][j-1])+a[i][j];
    }
   }
   if(mn[n][m]>0||mx[n][m]<0){
    no;
    return;
   }
   ys;
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
