#include<bits/stdc++.h>
using namespace std;
int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};
int n,m,vis[1005][1005];
char ch[1005][1005];
bool isvalid(int d,int e){
      if((d<1||d>n||e<1||e>m)||(ch[d][e]=='#')||(vis[d][e]==1))
         return false;
      else return true;
}
void dfs(int x,int y){
    //cout<<x<<' '<<y<<endl;
      vis[x][y]=1;
      for(int k=0;k<4;k++){
       if(isvalid(x+dx[k],y+dy[k])){
           dfs(x+dx[k],y+dy[k]);
        }
    }
}
int main()
{
   // freopen("i.txt","r",stdin);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(vis[i][j]==0&&ch[i][j]=='.'){
            //cout<<i<<' '<<j<<' '<<cnt<<endl;
             dfs(i,j);
              cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

