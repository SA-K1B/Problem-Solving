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
   ll n,p,a[105],p[105],b[105];
   cin>>n>>p;
   for(ll i=1;i<=n;i++){
      cin>>a[i];
      b[i]=a[i];
   }
   set <ll> st;
    for(ll i=1;i<=p;i++){
      cin>>x;
      st.insert(x);
    }
   sort(b,b+n);
   for(ll i=1;i<=n;i++){

   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}

