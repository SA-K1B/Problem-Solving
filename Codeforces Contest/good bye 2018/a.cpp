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
    ll t;
    cin>>t;
    while(t--){
        ll n,a[105],b[105],k1,k2;
        cin>>n>>k1>>k2;
        ll f;
        for(ll i=0;i<k1;i++){
            cin>>a[i];
            if(a[i]==n)
                f=1;
        }
        for(ll i=0;i<k2;i++){
            cin>>b[i];
            if(b[i]==n)
                f=2;
        }
      if(f==1)
        cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}


