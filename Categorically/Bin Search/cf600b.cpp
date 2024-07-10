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
        ll m,n;
        cin>>n>>m;
         vector <ll> a(n);
        vector <ll> b(m);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<m;i++)
            cin>>b[i];
       sort(a.begin(),a.end());
       for(ll i=0;i<m;i++){
        ll e=b[i];
        auto pos=upper_bound(a.begin(),a.end(),e)-a.begin();
        cout<<pos<<' ';
       }
       return 0;
}


