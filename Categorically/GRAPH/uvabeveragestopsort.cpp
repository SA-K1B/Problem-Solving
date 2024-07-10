#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
map <int,string> mp1;
vector <int> v[105];
int in[104];
vector <string> result;
void kahn(int n){
    queue <int> q;
    for(int j=1;j<=n;j++){
        if(in[j]==0)
            q.push(j);
    }
    while(!q.empty()){
    int cur=q.front();
    q.pop();
    result.push_back(mp1[cur]);
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
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    string s1,s2;
    int n,t=1;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            v[i].clear();
            in[i]=0;
            cin>>s1;
            mp[s1]=i;
            mp1[i]=s1;
        }
        int m;
        cin>>m;
        while(m--){
            cin>>s1>>s2;
            int a=mp[s1];
            int b=mp[s2];
            v[a].push_back(b);
            in[b]++;
        }
        kahn(n);
        printf("Case #%d: Dilbert should drink beverages in this order: ",t++);
        int s=result.size();
        //cout<<s<<endl;
        for(int i=0;i<s;i++){
                if(i!=s-1)
           cout<<result[i]<<' ';
        else {
                cout<<result[i];
                printf(".\n");
        }
    }
        cout<<"\n";
        mp.clear();
        mp1.clear();
        result.clear();
    }
    return 0;
}
