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
        ll n;
        cin>>n;
        vector <ll> a(n+5);
        vector <ll> b(n+5);
        for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;
            a[x]=i;
        }
        for(ll i=1;i<=n;i++)
            cin>>b[i];
      vector<ll> v(n,0);
        for(ll i=1;i<=n;i++){
            ll cur=b[i];
            ll pos=a[cur];
            if(pos==i)
                    v[0]++;
            else if(i==1&&pos==n)
                v[i]++;
            else{
                if(i<pos){
                    ll r=(i-1)+(n-pos)+1;
                    v[r]++;
                }
                else{
                    v[i-pos]++;
                }
            }
        }
       sort(v.begin(),v.end());
       cout<<v[n-1]<<endl;

    return 0;
}


