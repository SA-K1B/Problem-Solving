#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 1000000000000000000
#define Min -1000000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int ans[100005],par[100005];
vector <pair<int,int>> v[100005];
void dfs(int node,int p){
    for(auto c:v[node]){
      if(par[node]==c.first)
        continue;
      par[c.first]=node;
      ans[c.second]=p;
      if(p==2)
      dfs(c.first,3);
      else dfs(c.first,2);
    }
    return;
}
void solve()
{
  int n;
  cin>>n;
  for(int i=1;i<=n-1;i++){
    v[i].clear();
    par[i]=0;
  }
  for(int i=1;i<=n-1;i++){
    int x,y;
    cin>>x>>y;
    v[x].pb({y,i});
    v[y].pb({x,i});
  }
  int k;
  for(int i=1;i<=n-1;i++){
    if(v[i].size()>2){
        cout<<"-1"<<endl;
        return;
    }
    if(v[i].size()==1){
     k=i;
    }
  }
  dfs(k,2);
  for(int i=1;i<=n-1;i++)
    cout<<ans[i]<<' ';
  cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
