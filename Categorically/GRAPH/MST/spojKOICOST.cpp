#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000000
#define ll long long
int par[100005];
struct edge{
   ll a;
   ll b;
   ll w;
 };
 edge ar[100005];
 bool cmp(edge x,edge y){
   if(x.w<y.w)
    return true;
    return false;
}
 int findpar(ll v){
 if(par[v]==-1)
    return v;
  return par[v]=findpar(par[v]);
 }
 void unite(ll d,ll e){
    par[e]=d;
 }
int main()
{
    freopen("i.txt","r",stdin);
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
        par[i]=-1;
    ll i,s=0;
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
    ll px=findpar(ar[i].a);
    ll py=findpar(ar[i].b);
    if(px!=py){
      //      cout<<i<<endl;
        s+=ar[i].w;
       // if(s>MOD)
          //  s%=MOD;
        unite(px,py);
    }
 }
 //cout<<i<<endl;
  cout<<s<<endl;
  return 0;
}

