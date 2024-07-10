#include<bits/stdc++.h>
using namespace std;
int par[50005];
int findpar(int x){
   if(par[x]==x)
    return x;
   return par[x]=findpar(par[x]);
}
void unite(int d,int e){
    par[e]=d;
}
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int> > qu;
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            par[i]=i;
        int wp=0;
        while(m--){
            int a,b,d,pa,pb;
            cin>>d>>a>>b;
            if(a>n||b>n){
                wp++;
                continue;
            }
            if(d==1){
                pa=findpar(a);
                pb=findpar(b);
                    unite(pa,pb);
            }
            else{
                 qu.push_back({a,b});
            }
        }
        for(int i=0;i<qu.size();i++){
              int a=qu[i].first;
              int b=qu[i].second;
              int  pa=findpar(a);
              int pb=findpar(b);
              if(pa==pb)
                wp++;
        }
        cout<<wp<<endl;
    }
    return 0;
}
