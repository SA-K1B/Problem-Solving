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
  // string s1;
 //  cin>>s1;
   ll n,a[205];
   cin>>n;
   for(ll i=1;i<=n;i++)
    cin>>a[i];
    vector <ll> res;
   for(ll i=1;i<=n;i++){
    ll cnt=0;
    ll p=i;
    while(1){
        if(a[p]==i)
            break;
        else cnt++;
        p=a[p];
    }
   res.pb(cnt+1);
   }
   for(auto it:res)
    cout<<it<<' ';
   cout<<endl;
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
    //    cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}

