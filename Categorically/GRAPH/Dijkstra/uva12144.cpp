#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
vector <pair<int,int> > v[505];
vector <int> dis(505,INF);
void bfs(int fnode,int enode){
    priority_queue< pair<int,int> , vector< pair<int,int> > , greater<pair<int,int> > > pq;
     dis[fnode]=0;
     pq.push({0,fnode});
     while(!pq.empty()){
        int cur=pq.top().second;
        int d=pq.top().first;
        pq.pop();
        for(int j=0;j<v[cur].size();j++){
            int child=v[cur][j].first;
            if(child==fnode||child==enode)
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
    int n,m,a,b;
    cin>>n>>m;
    cin>>a>>b;
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
    }
    bfs(a,b);
        if(dis[b]==INF)
        cout<<"-1"<<' ';
        else cout<<dis[b]<<' ';
    return 0;
}
