#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int x1[]={-1,0};
int y3[]={0,-1};
bool vis[55][55];
char c[55][55];
int n;
bool isvalid(int g,int h){
   if((g<=n&&h<=n&&g>=1&&h>=1)&&c[g][h]=='1'&&vis[g][h]==0)
    return true;
   else return false;
}
void dfs(int x,int y){
   vis[x][y]=1;
   for(int k=0;k<4;k++){
     //  cout<<x+x1[k]<<' '<<y+y3[k]<<endl;
   if(isvalid(x+x1[k],y+y3[k]))
      dfs(x+x1[k],y+y3[k]);
   }
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
  //  ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cin>>c[i][j];
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                vis[i][j]=0;
        }
       /* for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cout<<c[i][j];
                cout<<endl;
        }*/
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            if(vis[i][j]==0&&c[i][j]=='1'&&(i==n||j==n)){
               // cout<<i<<' '<<j<<endl;
                dfs(i,j);
            }
         }
     }
     int f=0;
       for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
          if(c[i][j]=='1'&&vis[i][j]==0){
            puts("NO");
            f=1;
            break;
          }
        }
          if(f)
            break;
     }
     if(!f)
        puts("YES");
 }
    return 0;
}

