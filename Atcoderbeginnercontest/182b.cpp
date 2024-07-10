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
    ll n,a[1005];
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll mx=Min;
    ll j,s;
    for( j=2;j<=1000;j++){
         //   cout<<j<<endl;
       ll cnt=0;
       for(ll i=1;i<=n;i++){
        if(a[i]%j==0)
       // cout<<j<<endl;
            cnt++;
       }
       if(mx<cnt){
        mx=cnt;
        s=j;
        //cout<<j<<' '<<cnt<<endl;
    }
 }
    cout<<s<<endl;
    return 0;
}

