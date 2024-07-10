#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,a[3005],b[3005];
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
        cin>>a[i];
     for(ll i=1;i<=m;i++)
        cin>>b[i];
     ll ans=0;
     ll i=1,j=1;
     while(i<=n&&j<=m){
        if(a[i]<=b[j]){
            j++;
            i++;
        }
        else
            j++;
     }
     cout<<(n-i+1)<<endl;
    return 0;
}

