#include<bits/stdc++.h>
using namespace std;
int nodes,edge,a,b,c,n,x,y,i,j,r;
vector <int> v[200005];
int vis[200005];
vector <int> par(200005);
vector <int> res;
int dfs(int a){
   //cout<<a<<endl;
   res.push_back(a);
   vis[a]=1;
  //cout<<a<<endl;
  //cout<<a<<' '<<v[a].size()<<endl;
  // cout<<vis[4]<<endl;
   for(j=0;j<v[a].size();j++){
    y=v[a][j];
    //cout<<y<<endl;
    if(vis[y]==0){
        par[y]=a;
     //   cout<<y<<' '<<a<<endl;
        dfs(y);
    }
   }
   if(a!=1)
   res.push_back(par[a]);
   //cout<<a<<endl;
  // st.push(a);
}
int main()
{
    freopen("i.txt","r",stdin);
    cin>>nodes;
    vector <pair<int,int>> v2;
    for(i=1;i<=nodes-1;i++){
        int a,b;
        cin>>a>>b;
        if(a>b)
          v2.push_back({b,a});
        else v2.push_back({a,b});
    }
    sort(v2.begin(),v2.end());
    for(i=0;i<nodes-1;i++){
        //cout<<v2[i].first<<' '<<v2[i].second<<endl;
        v[v2[i].first].push_back(v2[i].second);
        v[v2[i].second].push_back(v2[i].first);
    }
    /*for(i=1;i<=nodes;i++){
        if(vis[i]==0){
           dfs(i);
        }
    }*/
    dfs(1);
    for(auto it:res) 
      cout<<it<<' ';
      cout<<endl;
    //cout<<st.top()<<endl;
    //n=st.size();
    //for(i=1;i<=n;i++){
      //  x=st.top();
        //    if(i==n)
          //      cout<<x<<endl;
        //else cout<<x<<' ';
        //st.pop();
    //}
    return 0;
}
