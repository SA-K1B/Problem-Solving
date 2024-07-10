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
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,cnt=1;
    while(cin>>x){
    if(x==-1){
        break;
    }
    if(cnt>1)
        cout<<endl;
    printf("Test #%d:\n",cnt++);
    printf("  maximum possible interceptions: ");
    ll y;
    vector <ll> a;
    vector <ll> b;
    a.pb(x);
    while(cin>>y){
        if(y==-1)
            break;
        else a.pb(y);
    }
    reverse(a.begin(),a.end());
    b.pb(a[0]);
    ll c=0;
    for(ll i=1;i<a.size();i++){
        if(a[i]>=b.back())
            b.pb(a[i]);
        else{
            ll in=upper_bound(b.begin(),b.end(),a[i])-b.begin();
            b[in]=a[i];
        }
        //cout<<b.back()<<endl;
    }
    cout<<b.size()<<endl;
    }
    return 0;
}


