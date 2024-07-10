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
   ll x;
   cin>>x;
   ll ans1,ans2;
    ans1=x;
    ans2=1;
   for(ll i=1;i*i<=x;i++){
    if(x%i==0){
      ll y=x/i;
      if(lcm(i,y)==x){
        if(max(i,y)<ans1){
        ans1=max(i,y);
        ans2=min(i,y);
      }
    }
   }
 }
   cout<<ans2<<' '<<ans1<<endl;
   /*for(ll i=0;i<n;i++)
    cin>>a[i];*/
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


