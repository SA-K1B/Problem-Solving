#include<bits/stdc++.h>
using namespace std;
vector <int> v[105];
int in[104];
vector <int> result;
void kahn(int n){
    queue <int> q;
    for(int j=1;j<=n;j++){
        if(in[j]==0)
            q.push(j);
    }
    while(!q.empty()){
    int cur=q.front();
    q.pop();
    result.push_back(cur);
    for(int k=0;k<v[cur].size();k++){
        int child=v[cur][k];
        in[child]--;
        if(in[child]==0)
            q.push(child);
     }
  }
}
int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int n,m;
    while(cin>>n>>m){
            if(n==0&&m==0)
            break;
    for(int i=1;i<=n;i++){
        v[i].clear();
        in[i]=0;
    }
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        in[b]++;
    }

    kahn(n);
   // sort(result.begin(),result.end());
    int s=result.size();
        for(int i=0;i<s;i++){
                if(i!=s-1)
        cout<<result[i]<<' ';
        else {
        cout<<result[i];
        cout<<"\n";
        }
    }
        result.clear();
 }
    return 0;
}
