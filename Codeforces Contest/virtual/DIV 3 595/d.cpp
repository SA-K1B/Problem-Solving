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
vector <ll> p;
bool is(ll x){
 if((x%3!=0)&&((x-1)%3!=0))
    return false;
 else{
    auto pos=upper_bound(p.begin(),p.end(),x)-p.begin();
    pos--;
    while(pos>=0){
    if(x>=p[pos]){
    x-=p[pos];
    }
    pos--;
  }
    if(x==0)
        return true;
    return false;
 }
}
void solve()
{
   ll n;
   cin>>n;
   for(ll i=n;;i++){
    if(is(i)){
        cout<<i<<endl;
        break;
    }
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    for(ll i=0;i<=38;i++){
        db x1=ceil(pow(3,i));
        ll x=(ll)x1;
        cout<<x<<endl;
        p.pb(x);
    }
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


