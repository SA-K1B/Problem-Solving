#include<bits/stdc++.h>
using namespace std;
char ch[105][105];
int r,c,vis[105][105],col[105][105];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool isvalid(int d,int e){
   if((d>r||d<1||e>c||e<1)||(vis[d][e]==1)||ch[d][e]=='-')
    return false;
   else return true;
}
void dfs(int x,int y){
    vis[x][y]=1;
    for(int k=0;k<4;k++){
        if(isvalid(x+dx[k],y+dy[k])){
            if(col[x][y]==1)
                col[x+dx[k]][y+dy[k]]=2;
            else col[x+dx[k]][y+dy[k]]=1;
            dfs(x+dx[k],y+dy[k]);
        }
    }
}
int main()
{
    //freopen("i.txt","r",stdin);
    int i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            cin>>ch[i][j];
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
         if(vis[i][j]==0&&ch[i][j]=='.'){
            col[i][j]=1;
            dfs(i,j);
         }
    }
     for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
         if(ch[i][j]=='.'){
            if(col[i][j]==1)
                cout<<"B";
            else cout<<"W";
         }
         else cout<<"-";
        }
        cout<<"\n";
  }
    return 0;
}
