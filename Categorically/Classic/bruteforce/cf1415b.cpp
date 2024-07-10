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
        ll n,k,a[100005];
        cin>>n>>k;
        set <ll> st;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        ll ans=Max;
        auto it=st.begin();
        while(it!=st.end()){
            ll x=*it;
            ll i=0,cnt=0;
            while(i<n){
                if(x==a[i])
                    i++;
                else{
                    i+=k;
                    cnt++;
                    }
                }
                ans=min(ans,cnt);
                it++;
            }
            cout<<ans<<endl;
    }
    return 0;
}


