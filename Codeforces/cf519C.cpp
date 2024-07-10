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
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    if(n==0||m==0){
        cout<<"0"<<endl;
        return 0;
    }
    ll a,b;
    if(n>=m){
        a=n;
        b=m;
    }
    else{
       a=m;
       b=n;
    }
        if(a%2==0){
            ll x=a/2;
            if(b>=x){
                ll c=b-x;
                cout<<x+(c/3)<<endl;
            }
            else cout<<b<<endl;
        }
        else{
            ll x=a/2;
            if(b==x){
                cout<<x<<endl;
            }
            else if(b>x){
                ll ans=0;
                if(b>=x+2)
                   ans++;
                ll c=b-x-2;
                ans+=x+(c/3);
                cout<<ans<<endl;
            }
            else cout<<min(b,x)<<endl;
        }
    return 0;
}

