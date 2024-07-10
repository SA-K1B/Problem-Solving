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
    ll n,a[130];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll mx1=a[n-1];
    map <ll,ll> m;
    vector <ll> v;
    for(ll j=1;j*j<=mx1;j++){
        if(mx1%j==0){
            if(j!=mx1/j){
            m[j]++;
            m[mx1/j]++;
            }
            else m[j]++;
        }
    }
    for(ll i=0;i<n;i++){
        if(m[a[i]]==0){
            v.pb(a[i]);
        }
        else m[a[i]]--;
    }
    sort(v.begin(),v.end());
    ll mx2=v.back();
    cout<<mx1<<' '<<mx2<<endl;
    return 0;
}

