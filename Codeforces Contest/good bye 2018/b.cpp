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
    ll t;
    cin>>t;
    while(t--){
        ll n,a[200005];
        cin>>n;
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll ans=-1;
        for(ll i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])>1){
                ans=i;
                break;
            }
        }
        if(ans==-1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<"\n"<<ans+1<<' '<<ans+2<<endl;
    }
    return 0;
}

