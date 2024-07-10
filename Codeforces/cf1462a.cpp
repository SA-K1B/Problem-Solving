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
        ll n,a[305];
        cin>>n;
        for(ll i=0;i<n;i++)
            cin>>a[i];
            ll i,j;
        for(i=0,j=n-1;i<=j;i++,j--){
                if(i==j)
                  cout<<a[i];
               else cout<<a[i]<<' '<<a[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}


