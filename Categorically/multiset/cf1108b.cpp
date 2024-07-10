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
    ll x,n,a[130];
    multiset <ll> ms;
    multiset <ll>::iterator it;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        ms.insert(x);
    }
    it=(ms.end());
    it--;
    ll mx1=*it;
   // cout<<mx1<<endl;
    for(ll i=1;i<=mx1;i++){
        if(mx1%i==0){
            ms.erase(i);
        }
    }
    it=ms.end();
    ll mx2=*(--it);
    cout<<mx1<<' '<<mx2<<endl;
    return 0;
}
