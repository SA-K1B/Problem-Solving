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
void solve()
{
   ll k,n;
   cin>>n>>k;
   ll temp=k;
   map <ll,ll> mp;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x%k!=0)
    mp[x%k]++;
   }
 //  for(auto [f,s]:mp)
   // cout<<f<<' '<<s<<endl;
   ll mx=Min;
   for(auto [f,s]: mp){
    k=temp;
    while(s>0){
        mx=max(mx,k-f);
       // cout<<mx<<endl;
        k+=temp;
        s--;
    }
   }
   if(mx==Min)
    cout<<"0"<<endl;
   else cout<<mx+1<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


