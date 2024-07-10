#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min a-10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int vis[1005][1005];
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    for(ll i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        vis[x][y]=1;
        if(ans==0){
                if(ans==0&&(vis[x][y-1]&&vis[x-1][y-1]&&vis[x-1][y])||(vis[x-1][y+1]&&vis[x-1][y]&&vis[x][y+1])||(vis[x][y+1]&&vis[x+1][y+1]&&vis[x+1][y])||(vis[x+1][y]&&vis[x+1][y-1]&&vis[x][y-1])){
                    ans=i;
         }
      }
    }
    cout<<ans<<endl;
    return 0;
}


