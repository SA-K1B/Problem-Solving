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
        ll n,a[51],b[51];
        cin>>n;
        for(ll i=1;i<=n;i++)
            cin>>a[i];
         ll osum=0,esum=0;
         for(ll i=1;i<=n;i+=2){
            osum+=a[i];
         }
         for(ll i=2;i<=n;i+=2){
            esum+=a[i];
         }
         if(osum<=esum){
            for(ll i=1;i<=n;i+=2){
              b[i]=1;
            }
             for(ll i=2;i<=n;i+=2){
              b[i]=a[i];
            }
         }
         else{
            for(ll i=2;i<=n;i+=2){
              b[i]=1;
            }
             for(ll i=1;i<=n;i+=2){
              b[i]=a[i];
            }
         }
         for(ll i=1;i<=n;i++){
              cout<<b[i]<<' ';
            }
            cout<<endl;
    }
    return 0;
}

