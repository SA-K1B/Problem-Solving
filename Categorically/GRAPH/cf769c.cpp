#include<bits/stdc++.h>
using namespace std;
char s[1005][1005];
int vis[1005][1005];
void bfs(int x,int y){




}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(k%2){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(s[i][j]=='X')
        bfs(i,j);

        }
    }

}
