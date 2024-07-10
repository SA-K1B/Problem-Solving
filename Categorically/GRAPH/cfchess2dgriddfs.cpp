#include<bits/stdc++.h>
using namespace std;
int n,m,vis[105][105];
int dx[]={-1,0,+1,0};
int dy[]={0,+1,0,-1};
bool isvalid(int d,int e){
     //cout<<d<<' '<<e<<endl;
     if((d<1||d>n||e<1||e>m)||(vis[d][e]==true))
        return false;
     else {
           // cout<<d<<' '<<e<<endl;
            return true;
     }
}
void dfs(int x,int y){
    cout<<x<<' '<<y<<endl;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
            if(x==4&&y==1){
            int r=x+dx[i];
            int t=y+dy[i];
           // cout<<r<<' '<<t<<endl;
            }
        if(isvalid(x+dx[i],y+dy[i]))
          dfs(x+dx[i],y+dy[i]);
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    int a,b;
    cin>>n>>m>>a>>b;
    dfs(a,b);
    for(int k=1;k<=n;k++){
        for(int j=1;j<=m;j++){
            if(!vis[k][j]){
           // cout<<k<<' '<<j<<endl;
              dfs(k,j);
            }
        }
    }
    return 0;
}
