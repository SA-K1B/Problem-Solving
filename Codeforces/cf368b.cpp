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
ll a[100005],res[100005],vis[100005];
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(ll i=n;i>0;i--){
        if(vis[a[i]]==0){
            cnt++;
            vis[a[i]]=1;
        }
        res[i]=cnt;
    }
    ll k;
    for(ll i=1;i<=m;i++){
        cin>>k;
        cout<<res[k]<<endl;
    }
    return 0;
}

