#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
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
        ll n;
        cin>>n;
        string s1;
        cin>>s1;
        vector <pair<char,ll>> v;
        ll j=0;
        while(j<n){
            char ch=s1[j];
            if(v.empty()||ch!=v.back().first){
                v.pb({ch,1});
            }
            else
                v.back().second++;
            j++;
        }
       // for(auto [f,s]:v)
          //  cout<<f<<' '<<s<<endl;
        ll c0=0,c1=0;
        for(auto [f,s]:v){
            if(f=='0')
                c0+=(s-1);
            else c1+=(s-1);
        }
       cout<<max(c0,c1)<<endl;

    }
    return 0;
}
