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
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m,a[105],b[105],c[105];
        memset(c,0,sizeof(c));
        cin>>n>>m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            c[a[i]]=1;
        }
        for(ll i=0;i<m;i++)
            cin>>b[i];
            ll cnt=0;
        for(ll i=0;i<m;i++){
            if(c[b[i]]==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
