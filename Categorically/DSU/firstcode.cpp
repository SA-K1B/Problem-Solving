#include<bits/stdc++.h>
using namespace std;
int par[100];
void makepar(int x){
    par[x]=x;
}
int findpar(int v){
    if(par[v]==v){
        return v;
        cout<<v<<endl;
    }
    else return par[v]=findpar(par[v]);
}
void unite(int r,int s){
    int pr=findpar(r);
    int ps=findpar(s);
    if(pr==ps)
        return;
    else par[s]=r;
}
int main()
{
    freopen("i.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=n;i++){
        makepar(i);
    }
    while(e--){
        int a,b;
        cin>>a>>b;
        unite(a,b);
    }
    cout<<findpar(10)<<endl;
    cout<<par[10]<<endl;
    return 0;
}
