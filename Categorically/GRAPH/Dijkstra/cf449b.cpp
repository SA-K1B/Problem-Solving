#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define ll long long
vector <pair<ll,ll> > v[100005];
vector <ll> dis(100005,INF);
void bfs(ll node){
    priority_queue< pair<ll,ll> , vector< pair<ll,ll> > , greater<pair<ll,ll> > > pq;
     dis[1]=0;
     pq.push({0,1});
     while(!pq.empty()){
        ll cur=pq.top().second;
        ll d=pq.top().first;
        pq.pop();
        for(int j=0;j<v[cur].size();j++){
            ll child=v[cur][j].first;
            if(child==1)
                continue;
            ll cd=v[cur][j].second;
            if(d+cd<=dis[child]){
                dis[child]=d+cd;
                pq.push({dis[child],child});
            }
        }
     }
}
int main()
{
  //  freopen("i.txt","r",stdin);
    ll n,m,k;
    cin>>n>>m>>k;
    while(m--){
        ll a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    bfs(1);
    ll x,y,cnt=0;
    while(k--){
     cin>>x>>y;
     if(dis[x]<=y)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

