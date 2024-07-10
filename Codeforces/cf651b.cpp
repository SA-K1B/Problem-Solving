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
    ll x,n,a[1005]={0};
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    ll mx=Min;
    for(ll i=1;i<=1000;i++){
       mx=max(mx,a[i]);
    }
    cout<<n-mx<<endl;
    return 0;
}


