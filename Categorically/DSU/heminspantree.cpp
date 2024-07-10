#include<bits/stdc++.h>
using namespace std;
int par[10001];
struct edge{
   int a;
   int b;
   int w;
 };
 edge ar[100001];
 bool cmp(edge x,edge y){
   if(x.w<y.w)
    return true;
    return false;
}
 int findpar(int v){
 if(par[v]==-1)
    return v;
  return par[v]=findpar(par[v]);
 }
 void unite(int d,int e){
    par[e]=d;
 }
int main()
{
    freopen("i.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        par[i]=-1;
    int i,s=0;
    for(i=0;i<m;i++){
        cin>>ar[i].a>>ar[i].b>>ar[i].w;
        s+=ar[i].w;
    }
   // cout<<s<<endl;
    sort(ar,ar+m,cmp);
    // for(int i=0;i<m;i++){
      //      cout<<ar[i].a<<' '<<ar[i].b<<' '<<ar[i].w<<endl;;

     //}
    s=0;
    for(i=0;i<m;i++){

    int px=findpar(ar[i].a);
    int py=findpar(ar[i].b);
    if(px!=py){
            cout<<i<<endl;
        s+=ar[i].w;
        unite(ar[i].a,ar[i].b);
    }
 }
 //cout<<i<<endl;
  //cout<<s<<endl;
  return 0;
}
