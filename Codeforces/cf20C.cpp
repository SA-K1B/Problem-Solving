#include<bits/stdc++.h>
#define ll long long
#define INF 1000000000
using namespace std;
vector <int> r;
int vis[100005];
vector < pair<int,int> > v[100005];
vector  <int> dis(100005,INF);
int par[100005];
bool da(int n){
   priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
   pq.push({0,1});
   while(!pq.empty()){
    int cur=pq.top().second;
     //cout<<cur<<endl;
    vis[cur]=1;
    if(cur==n)
        return true;
    int curd=pq.top().first;
    pq.pop();
    for(int j=0;j<v[cur].size();j++){
        int child=v[cur][j].first;
       // if(child==1)
         //   continue;
        int cd=v[cur][j].second;
        if(!vis[child]&&dis[child]>curd+cd){
         //   cout<<child<<endl;
            dis[child]=curd+cd;
            pq.push({dis[child],child});
            par[child]=cur;
        }
     }
   }
   return false;
}
int main()
{
   freopen("i.txt","r",stdin);
   //cout<<par[2]<<endl;
    int a,b,n,m,w;
    cin>>n>>m;
        //cout<<n<<m<<endl;
    while(m--){
        cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    dis[1]=0;
    par[1]=-1;
    //cout<<n<<m<<endl;
    if(da(n)){
        //cout<<par[1]<<endl;
    //r.push_back(n);
    int p=n;
    while(p!=-1){
        //p=par[n];
        r.push_back(p);
       // cout<<p<<endl;
        p=par[p];
    }
    reverse(r.begin(),r.end());
    for(int i=0;i<r.size();i++)
        cout<<r[i]<<' ';
        cout<<"\n"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
