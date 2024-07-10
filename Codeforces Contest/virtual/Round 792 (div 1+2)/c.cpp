#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  int n,m;
  vector <int> vis(200005,0);
   cin>>n>>m;
   int a[n+5][m+5];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
        cin>>a[i][j];
   }
   int x=-1,y=-1;
   vi v;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        v.pb(a[i][j]);
    }
    srt(v);
    int f=0,f1=0;
    for(int j=0;j<m;j++){
      if(v[j]!=a[i][j]&&f==0){
        if(x!=-1&&x!=j){
            cout<<"-1"<<endl;
            return;
        }
        else if(x==-1){
           x=j;
        }
        vis[i]=1;
        f=1;
      }
      else if(v[j]!=a[i][j]&&f==1){
        if(f1==1){
            cout<<"-1"<<endl;
            return;
        }
        if(y!=-1&&y!=j){
            cout<<"-1"<<endl;
            return;
        }
        else if(y==-1){
           y=j;
        }
        f1=1;
      }
      v.clear();
     }
    }
   if(x==-1&&y==-1){
    cout<<"1"<<' '<<"1"<<endl;
    return;
   }
   //cout<<vis[0]<<' '<<vis[1]<<endl;
   for(int i=0;i<n;i++){
     if(vis[i]==0){
      if(a[i][x]!=a[i][y]){
        cout<<"-1"<<endl;
        return;
       }
      }
     }
     cout<<x+1<<' '<<y+1<<endl;
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

