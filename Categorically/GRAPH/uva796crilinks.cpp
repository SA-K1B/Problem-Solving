#include<bits/stdc++.h>
using namespace std;
vector <int> v[1000001];
int timer,in[1000001],low[1000001],vis[1000001];
vector<pair<int,int> > ans;
vector<pair<int,int> >:: iterator it;
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
         }
         else{
           // ans.push_back({node,child});
            dfs(child,node);
            if(low[child]>in[node]){
                ans.push_back({node,child});
            }
            low[node]=min(low[node],low[child]);
         }
    }
}
int main()
{
   // freopen("i.txt","r",stdin);
    ///freopen("o.txt","w",stdout);
    int n,a,b,num,t=1;
    while(cin>>n){
            if(t>1)
            cout<<"\n";
        if(n==0){
            printf("0 critical links");
            break;
        }
        for(int i=0;i<n;i++){
            vis[i]=0;
            in[i]=0;
            low[i]=0;
            v[i].clear();
        }
        timer=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            scanf(" (%d) ",&num);
            for(int j=1;j<=num;j++){
                cin>>b;
                v[a].push_back(b);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i])
                dfs(i,-1);
        }
        printf("%d critical links\n",ans.size());
        sort(ans.begin(),ans.end());
        for(it=ans.begin();it!=ans.end();it++)
            cout<<it->first<<' '<<"-"<<' '<<it->second<<endl;
            ans.clear();
            t++;
    }
    return 0;
}
