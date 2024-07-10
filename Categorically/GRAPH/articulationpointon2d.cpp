#include<bits/stdc++.h>
using namespace std;
char ch[505][505];
int r,c,x,vis[505][505],in[505][505],low[505][505];
int timer,dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
set <pair<int,int> > st;
set <pair<int,int> >:: iterator it;
bool isvalid(int d,int e){
   if((d>r||d<1||e>c||e<1)||ch[d][e]=='#')
    return false;
   else return true;
}
void dfs(int x,int y,int px,int py){
    in[x][y]=timer;
    low[x][y]=timer;
    timer++;
    vis[x][y]=1;
    int children=0;
    for(int k=0;k<4;k++){
            int cx=x+dx[k];
            int cy=y+dy[k];
        if(isvalid(cx,cy)){
            if(cx==px&&cy==py)
                continue;
            else if(vis[cx][cy]==1){
                    low[x][y]=min(low[x][y],in[cx][cy]);
            }
            else{
                dfs(cx,cy,x,y);
                if(low[cx][cy]>=in[x][y]&&px!=-1&&py!=-1)
                st.insert({x,y});
                low[x][y]=min(low[x][y],in[cx][cy]);
                children++;
        }
    }
 }
    if(px==-1&&py==-1&&children>1)
    st.insert({x,y});
}
int main()
{
    freopen("i.txt","r",stdin);
    int i,j;
    cin>>r>>c>>x;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            cin>>ch[i][j];
    }
    int f=0;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
         if(ch[i][j]=='.'){
            dfs(i,j,-1,-1);
            f=1;
            break;
         }
         if(f)
            break;
    }
    for(it=st.begin();it!=st.end();it++)
        cout<<it->first<<' '<<it->second<<endl;
    /* for(i=1;i<=r;i++){
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
  */
    return 0;
}

