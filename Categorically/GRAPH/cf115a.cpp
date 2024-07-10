#include<bits/stdc++.h>
using namespace std;
int level[2005],mn=1;
vector <int> v[2005];
vector <int> manager;
void bfs(int fnode){
     queue<int> q;
     level[fnode]=1;
     q.push(fnode);
     while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int j=0;j<v[cur].size();j++){
            int child=v[cur][j];
            level[child]=level[cur]+1;
            if(level[cur]+1>mn)
                mn=level[cur]+1;
            q.push(child);
        }
     }
}
int main()
{
    freopen("i.txt","r",stdin);
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x==-1){
            manager.push_back(i);
        }
        else{
          v[x].push_back(i);
        }
    }
    for(int k=0;k<manager.size();k++){
        bfs(manager[k]);
    }
    cout<<mn<<endl;
    return 0;
}
