#include<bits/stdc++.h>
using namespace std;
vector <int> v[1005];
vector <pair<int,int> > close;
vector <pair<int,int> > open;
vector <pair<int,int> >:: iterator it;
int par[1005];
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
   // freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    for(int  i=1;i<=n;i++)
        par[i]=i;
    int m;
    cin>>m
    while(m--){
        int a,b;
        cin>>a>>b;
        int pa=findpar(a);
        int pb=findpar(b);
        if(pa!=pb){
            unite(pa,pb);
        }
    }
    //cout<<close.size()<<endl;
     int q;
     cin>>q;
     while(q--){
        int x,y;
        cin>>x>>y;
        if(par[x]!=par[y])
            cout<<"no"<<endl;
        else cout<<"yes"<<endl;
     }
      return 0;
  }
