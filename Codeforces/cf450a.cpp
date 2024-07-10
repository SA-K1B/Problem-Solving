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
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,a[105];
    cin>>n>>m;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll ans;
    float mx=Min;
    for(ll i=0;i<n;i++){
        float x=ceil((float)a[i]/m);
        //cout<<x<<endl;
        if(x>=mx){
           // cout<<mx<<endl;
            mx=x;
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

