#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
vector <pair<int,int> > v[100005];
vector <int> dis(100005,INF);
void bfs(int node){
    priority_queue< pair<int,int> , vector< pair<int,int> > , greater<pair<int,int> > > pq;
     dis[node]=0;
     pq.push({0,node});
     while(!pq.empty()){
        int cur=pq.top().second;
        int d=pq.top().first;
        pq.pop();
        for(int j=0;j<v[cur].size();j++){
            int child=v[cur][j].first;
            if(child==node)
                continue;
            int cd=v[cur][j].second;
            if(d+cd<dis[child]){
                dis[child]=d+cd;
                pq.push({dis[child],child});
            }
        }
     }
}
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        dis[i]=INF;
        v[i].clear();
    }
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
    }
    int fn,en;
    cin>>fn>>en;
    bfs(fn);
    if(dis[en]==INF)
    cout<<"NO"<<endl;
    else cout<<dis[en]<<endl;
    }
    return 0;
}
