#include<bits/stdc++.h>
using namespace std;
char ch[505][505];
int r,c,g,vis[505][505];
int cnt,dot,dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
set <pair<int,int> > st;
set <pair<int,int> >:: iterator it;
bool isvalid(int d,int e){
   if((d>r||d<1||e>c||e<1)||vis[d][e]==1||ch[d][e]=='#')
    return false;
   else return true;
}
void dfs(int x,int y){
    vis[x][y]=1;
    ++cnt;
    for(int k=0;k<4;k++){
            int cx=x+dx[k];
            int cy=y+dy[k];
        if(isvalid(cx,cy)){
                //cout<<cnt<<' '<<dot-g<<endl;
                if(cnt>=(dot-g)){
                        //cout<<cnt<<endl;
                    ch[cx][cy]='X';
            }
            dfs(cx,cy);
        }
    }
}
int main()
{
    //freopen("i.txt","r",stdin);
    int i,j;
    cin>>r>>c>>g;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='.')
                dot++;
        }
    }
   // cout<<dot-x<<endl;
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
           cout<<ch[i][j];
         cout<<"\n";
  }
    return 0;
}



