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
        vector <ll> e;
        vector <ll> o;
        ll n,a[2005];
        cin>>n;
        for(ll i=1;i<=2*n;i++){
            cin>>a[i];
            if(a[i]%2)
                o.pb(i);
            else e.pb(i);
        }
        ll x=e.size();;
        ll s=o.size();
        if(s%2){
              //  cout<<"d"<<endl;
            for(ll i=0;i<x-2;i+=2)
                cout<<e[i]<<' '<<e[i+1]<<endl;
            for(ll i=0;i<s-2;i+=2)
                cout<<o[i]<<' '<<o[i+1]<<endl;
        }
        else{

             if(x){
             for(ll i=0;i<x-3;i+=2)
                cout<<e[i]<<' '<<e[i+1]<<endl;
            for(ll i=0;i<s-1;i+=2)
                cout<<o[i]<<' '<<o[i+1]<<endl;
          }
          else{
            for(ll i=0;i<s-3;i+=2)
                cout<<o[i]<<' '<<o[i+1]<<endl;
          }
        }
    }
    return 0;
}


