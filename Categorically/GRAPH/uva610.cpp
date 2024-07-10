#include<bits/stdc++.h>
using namespace std;
vector <int> v[1000001];
int timer,in[1000001],low[1000001],vis[1000001];
vector<pair<int,int> > ans;
void dfs(int node,int par){
    vis[node]=1;
    in[node]=timer;
    low[node]=timer;
    timer++;
    for(int j=0;j<v[node].size();j++){
         int child=v[node][j];
         if(child==par)
            continue;
         else if(vis[child]){
            low[node]=min(low[node],in[child]);
            if(in[node]>in[child]){
          //  cout<<node<<' '<<child<<endl;
            ans.push_back({node,child});
         }
    }
         else{
          //  cout<<node<<' '<<child<<endl;
            ans.push_back({node,child});
            dfs(child,node);
            if(low[child]>in[node]){
                ans.push_back({child,node});
            }
            low[node]=min(low[node],low[child]);
         }
    }
}
int main()
{
 // freopen("i.txt","r",stdin);
   // freopen("o.txt","w",stdout);
  int n,m,t=1;
  while(cin>>n>>m){
        if(n==0&&m==0)
        break;
  for(int i=1;i<=n;i++){
    vis[i]=0;
    in[i]=0;
    low[i]=0;
    v[i].clear();
  }
  timer=0;
  while(m--){
  int a,b;
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
}
  dfs(1,-1);
  cout<<t++<<endl<<endl;
    //  cout<<ans.size()<<endl;
        for(int r=0;r<ans.size();r++)
        cout<<ans[r].first<<' '<<ans[r].second<<endl;
        cout<<"#"<<endl;
        ans.clear();
  }
   return 0;
}

