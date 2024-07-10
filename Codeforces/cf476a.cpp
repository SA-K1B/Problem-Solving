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
  // cin>>s1;
   ll n,m;
   cin>>n>>m;
   if(n!=0&&n<m)
    cout<<"-1"<<endl;
   else{
    db x1=ceil(n/2.0);
    ll x=x1;
    db x2=ceil((x*1.0)/m);
    ll y=x2;
    cout<<y*m<<endl;
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
 //   cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


