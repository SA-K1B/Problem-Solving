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
vector <ll> v[1005];
bool vis[1005];
int child;
void dfs(ll node){
     vis[node]=1;
     for(int j=0;j<v[node].size();j++){
         child=v[node][j];
       // cout<<child<<endl;
        if(vis[child]==1){
                cout<<child<<' ';
            return;
        }
        else dfs(child);
     }
}
int main()
{
    freopen("i.txt","r",stdin);
  //  freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        v[i].pb(x);
    }
    for(int k=1;k<=n;k++){
         dfs(k);
        //cout<<ans<<' ';
        for(int i=1;i<=n;i++){
            vis[i]=0;
        }
    }
    return 0;
}

