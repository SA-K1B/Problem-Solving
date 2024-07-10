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
    ll n,d;
    cin>>n>>d;
    vector <pair<ll,ll> > v;
    ll n1=n;
    while(n1--){
    ll x,y;
    cin>>x>>y;
    v.pb({x,y});
    }
    sort(v.begin(),v.end());
    ll pre[100005];
    ll sum=0;
    ll val[100005];
    ll i=0;
    for(auto [f,s]:v){
    val[i]=f;
    sum+=s;
    pre[i]=sum;
    i++;
    }
    //for(auto u:pre)
        //cout<<u<<' ';
    ll pres,subsum,ans=Min;
   // cout<<n<<endl;
    for(ll i=0;i<n;i++){
        ll nxt=val[i]+(d-1);
       // cout<<"g"<<endl;
        auto it=upper_bound(val,val+n,nxt)-val;
        if(i==0){
            pres=0;
        }
        else{
            pres=pre[i-1];
        }
            it--;
            subsum=pre[it]-pres;
            ans=max(ans,subsum);
    }
    cout<<ans<<endl;
    return 0;
}

