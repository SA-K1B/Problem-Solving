#include<bits/stdc++.h>
using namespace std;
char ch[505][505];
int f,r,c,vis[505][505];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool isvalid(int d,int e,char chr){
   if((d>r||d<1||e>c||e<1)||ch[d][e]!=chr)
    return false;
   else return true;
}
void dfs(int x,int y,int px,int py){
    vis[x][y]=1;
    for(int k=0;k<4;k++){
            int cx=x+dx[k];
            int cy=y+dy[k];
            char chr=ch[x][y];
            if(cx==px&&cy==py)
                continue;
        if(isvalid(cx,cy,chr)){
            if(vis[cx][cy]==1){
                f=1;
                return;
            }
            dfs(cx,cy,x,y);
        }
    }
}
int main()
{
   // freopen("i.txt","r",stdin);
    int i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>ch[i][j];
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            dfs(i,j,-1,-1);
            if(f){
                cout<<"Yes"<<endl;
                return 0;
            }
            memset(vis,0,sizeof(vis));
         }
    }
     cout<<"No"<<endl;
    return 0;
}




