#include <bits/stdc++.h>
using namespace std;
char ch[505][505];
bool vis[505][505];
void dfs(int x,int y){
     vis[x][y]=1;




}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch[i][j];
        }
    }
    dfs(1,1);


}
