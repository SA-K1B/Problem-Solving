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
    ll n,sum=0;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll a,b;
        cin>>a>>b;
        sum+=((b*(b+1))-((a-1)*a))/2;
    }
    cout<<sum<<endl;
    return 0;
}
