#include<bits/stdc++.h>
using namespace std;
vector <int> v[10005];
int in[10004];
vector <int> result;
void kahn(int n){
    priority_queue <int,vector<int>,greater<int> > q;
    for(int j=1;j<=n;j++){
        if(in[j]==0)
            q.push(j);
    }
    while(!q.empty()){
    int cur=q.top();
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
   // freopen("i.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        in[b]++;
    }
    for(int i=1;i<=n;i++){
        if(v[i].size()>1)
            sort(v[i].begin(),v[i].end());
    }
    kahn(n);
   // sort(result.begin(),result.end());
    int s=result.size();
    if(s==0||s!=n)
        printf("Sandro fails.\n");
    else{
        for(int i=0;i<s;i++)
        cout<<result[i]<<' ';
    cout<<"\n";
    }
    return 0;
}
