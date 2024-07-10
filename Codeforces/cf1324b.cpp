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
vector <ll> v1;
vector <ll> v2;
ll tot[5005][5005];
ll lcs(ll n){
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=n;j++){
            if(i==0||j==0)
                continue;
            else if(v1[j-1]==v2[i-1]){
                tot[i][j]=tot[i-1][j-1]+1;
            }
            else{
                tot[i][j]=max(tot[i-1][j],tot[i][j-1]);
            }
        }
    }
    return tot[n][n];
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v1.pb(x);
            v2.pb(x);
        }
        reverse(v2.begin(),v2.end());
       ll ans=lcs(n);
        if(ans>=3)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v1.clear();
        v2.clear();
    }
    return 0;
}

