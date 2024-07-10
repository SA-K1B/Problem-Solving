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
    ll q;
    cin>>q;
    while(q--){
        ll n,x,f=0,f2=0;
        map<ll,ll> m;
        vector <ll> v;
        cin>>n;
        for(ll i=1;i<=4*n;i++){
            cin>>x;
            m[x]++;
        }
        for(auto it: m){
            if(it.second%2!=0){
                f=1;
            }
            for(ll j=2;j<=it.second;j+=2)
              v.pb(it.first);
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else{
                ll mul=v[0]*v[2*n-1];
             for(ll i=1,j=2*n-2;i<n;i++,j--){
                if(v[i]*v[j]!=mul){
                    f2=1;
                    break;
                }
             }
             if(f2)
                cout<<"NO"<<endl;
             else cout<<"YES"<<endl;
        }
    }
    return 0;
}

