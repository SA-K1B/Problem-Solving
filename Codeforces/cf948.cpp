#include<bits/stdc++.h>
using namespace std;
char ch[505][505];
int r,c,f,vis[505][505];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool isvalid(int d,int e){
   if((d>r||d<1||e>c||e<1)||vis[d][e]==1||ch[d][e]=='W')
    return false;
    else if(ch[d][e]=='S'){
        f=1;
        return true;
    }
   else return true;
}
void dfs(int x,int y){
    vis[x][y]=1;
    for(int k=0;k<4;k++){
            int cx=x+dx[k];
            int cy=y+dy[k];
        if(isvalid(cx,cy)){
                if(f)
                return;
                //cout<<cnt<<' '<<dot-g<<endl;

                        //cout<<cnt<<endl;
                    ch[cx][cy]='D';
                    vis[cx][cy]=1;
            }
        }
}
int main()
{
    //freopen("i.txt","r",stdin);
    int i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>ch[i][j];
        }
    }
    int q=0;
   // cout<<dot-x<<endl;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
         if(vis[i][j]==0&&ch[i][j]=='W'){
            dfs(i,j);
            if(f){
                cout<<"No"<<endl;
                return 0;
            }
         }
    }
}
     cout<<"Yes"<<endl;
     for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
           cout<<ch[i][j];
         cout<<"\n";
  }
    return 0;
}




