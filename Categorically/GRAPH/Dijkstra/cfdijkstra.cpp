#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
vector <pair<int,int> > v[100005];
vector <int> dis(100005,INF);
void bfs(int node){
    priority_queue< pair<int,int> , vector< pair<int,int> > , greater<pair<int,int> > > pq;
     dis[1]=0;
     pq.push({0,1});
     while(!pq.empty()){
        int cur=pq.top().second;
        int d=pq.top().first;
        pq.pop();
        for(int j=0;j<v[cur].size();j++){
            int child=v[cur][j].first;
            if(child==1)
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
    freopen("i.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    bfs(1);
    for(int i=1;i<=n;i++){
        if(dis[i]==INF)
        cout<<"-1"<<' ';
        else cout<<dis[i]<<' ';
    }

    return 0;
}
