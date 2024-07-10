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
void solve()
{
   ll m,n,a[105];
   map <int,bool> mp;
   cin>>n>>m;
   for(ll i=0;i<n;i++)
    cin>>a[i];
   for(ll i=0;i<m;i++){
    ll x;
    cin>>x;
    mp[x-1]=1;
   }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]&&mp[j]==1)
                swap(a[j],a[j+1]);
        }
    }
    ll f=0;
    for(ll i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            f=1;
            break;
        }
    }
    if(f)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


