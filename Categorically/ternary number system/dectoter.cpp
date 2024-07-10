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
   //string s1;
   //cin>>s1;
   ll n;
   cin>>n;
   vector <ll> v;
   while(n>0){
    v.pb(n%3);
    n/=3;
   }
   reverse(v.begin(),v.end());
   for(auto it:v)
    cout<<it<<' ';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
     //   cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


