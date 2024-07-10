#include<bits/stdc++.h>
using namespace std;
int k,cnt,vis[100005],cat[100005];
vector <int> v[10005];
vector <int> ch;
void dfs(int x){
   if(cat[x]) cnt++;
   else cnt=0;
   if(cnt<=k)
   vis[x]=1;
   for(int j=0;j<v[x].size();j++){
    int child=v[x][j];
    if(vis[child]==0)
        dfs(child);
   }



}
int main()
{
    int n;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>cat[i];
    }
    for(int i=1;i<=n-1;i++){
      int a,b;
      v[a].push_back(b);
    }
    for(int i=2;i<=n;i++){
        if(v[i].size()==0)
            ch.push_back(i);
    }
    dfs(1);
}
