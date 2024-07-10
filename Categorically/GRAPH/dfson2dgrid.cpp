#include<bits/stdc++.h>
using namespace std;
char ch[505][505];
int r,c,vis[505][505];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool isvalid(int d,int e){
   if((d>r||d<1||e>c||e<1)||vis[d][e]==1||ch[d][e]=='#')
    return false;
   else return true;
}
void dfs(int x,int y){
    vis[x][y]=1;
    for(int k=0;k<4;k++){
            int cx=x+dx[k];
            int cy=y+dy[k];
        if(isvalid(cx,cy)){
            dfs(cx,cy);
        }
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    int i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>ch[i][j];
        }
    }
    int f=0;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
         if(ch[i][j]=='.'){
            dfs(i,j);
            f=1;
            break;
         }
    }
         if(f)
            break;
}

     for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
           cout<<"t";
         cout<<"\n";
  }
    return 0;
}



