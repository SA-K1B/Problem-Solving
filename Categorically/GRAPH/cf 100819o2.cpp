#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,0,-1,0};
ll dy[]={0,1,0,-1};
using namespace std;
char ch[505][505];
bool vis[505][505];
bool isvalid(int a,int b){
    if(a<1||a>n||b<1||b>m)
        return false;
        return true;
}
void dfs(int x,int y){
     cnt++;
     if(x==n&&y==m){
        ans=min(ans,cnt);
     }
     vis[x][y]=1;
     for(int k=0;k<4;k++){
        isvalid(x+(dx[k]*ch[x][y]),y+(dy[k]*ch[x][y])){
           dfs(x+(dx[k]*ch[x][y]),y+(dy[k]*ch[x][y]));
        }
     }
     return false;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        cnt=0;
        dfs(i,j);
        ans=min(ans,cnt);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


