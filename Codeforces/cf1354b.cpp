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
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector <pair<char,ll> > v;
        for(auto i:s){
            if(v.empty()||v.back().first!=i)
            v.pb({i,1});
            else v.back().second++;
        }
        ll ans=Max;
        for(ll i=1;i<v.size()-1;i++){
            if(v[i-1].first!=v[i+1].first){
                ans=min(ans,v[i].second+2);
            }
        }
        if(ans==Max)
            cout<<"0"<<endl;
       else cout<<ans<<endl;
    }
    return 0;
}

