#include<bits/stdc++.h>
using namespace std;
int dis[1000000];
map <string,int> mp1;
vector <pair<int,int> > v[1000000];
void bfs(int node){
    priority_queue< pair<int,int> , vector< pair<int,int> > , greater<pair<int,int> > > pq;
     dis[node]=0;
     pq.push({0,node});
     while(!pq.empty()){
        int cur=pq.top().second;
        int d=pq.top().first;
        //cout<<cur<<' '<<d<<endl;
        pq.pop();
        for(int j=0;j<v[cur].size();j++){
            int child=v[cur][j].first;
            //cout<<child<<' ';
            if(child==node)
                continue;
            int cd=v[cur][j].second;
           // cout<<cd<<endl;
            if(d+cd<dis[child]){
                dis[child]=d+cd;
               // cout<<' '<<child<<endl;
                pq.push({dis[child],child});
            }
        }
     }
}
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int num_city;
        cin>>num_city;
        for(int k=1;k<=num_city;k++){
            v[k].clear();
        }
        for(int i=1;i<=num_city;i++){
            string city_name;
            cin>>city_name;
            mp1[city_name]=i;
            int x;
            cin>>x;
            while(x--){
                int a,w;
                cin>>a>>w;
                v[i].push_back({a,w});
            }
        }
        int y;
        cin>>y;
        string s1,s2;
        while(y--){
            memset(dis,1000000,sizeof(dis));
            cin>>s1>>s2;
            int fn=mp1[s1];
           // cout<<fn<<endl;
            bfs(fn);
            int en=mp1[s2];
            int ans=dis[en];
            cout<<ans<<endl;
        }
        mp1.clear();
    }
     return 0;
}
