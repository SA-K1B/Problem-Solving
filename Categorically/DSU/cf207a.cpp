#include<bits/stdc++.h>
using namespace std;
int par[105];
vector <pair<int,int> > v(10000);
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
  //  freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        par[i]=i;
           // cout<<"r"<<endl;
    for(int i=1;i<=n;i++){
            int a,b;
           cin>>a>>b;
        v[i]=make_pair(a,b);
    }
// cout<<"r"<<endl;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(v[i].first==v[j].first||v[i].second==v[j].second){
                    int pi=findpar(i);
                    int pj=findpar(j);
                    if(pi!=pj)
                    unite(pi,pj);
            }
        }
    }
   // cout<<"r"<<endl;
    int cnt=0;
    int p1=findpar(1);
    for(int j=2;j<=n;j++){
       int pj=findpar(j);
        if(p1!=pj){
            cnt++;
            unite(p1,pj);
        }
    }
    cout<<cnt<<endl;
    return 0;
}
