#include<bits/stdc++.h>
using namespace std;
int dx[]={0,-1,0,1,1,1,-1,-1};
int dy[]={1,0,-1,0,-1,1,1,-1};
int n,vis[26][26];
char ch[26][26];
bool isvalid(int d,int e){
      if((d<1||d>n||e<1||e>n)||(ch[d][e]=='0')||(vis[d][e]==1))
         return false;
      else return true;
}
void dfs(int x,int y){
    //cout<<x<<' '<<y<<endl;
      vis[x][y]=1;
      for(int k=0;k<8;k++){
       if(isvalid(x+dx[k],y+dy[k])){
           dfs(x+dx[k],y+dy[k]);
        }
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    while(cin>>n){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            vis[i][j]=0;
            cin>>ch[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(vis[i][j]==0&&ch[i][j]=='1'){
            //cout<<i<<' '<<j<<' '<<cnt<<endl;
             dfs(i,j);
              cnt++;
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",t++,cnt);

 }
     return 0;
}


