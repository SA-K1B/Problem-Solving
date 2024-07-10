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
   //cin>>s1;
   ll x,y,a,b;
   cin>>x>>y>>a>>b;
   if(2*a<=b){
    cout<<a*abs(x-0)+a*abs(y-0)<<endl;
   }
   else{
   if(x<0&&y<0){
    x*=-1;
    y*=-1;
    ll mn=min(x,y);
    ll mx=max(x,y);
    cout<<b*mn+a*(mx-mn)<<endl;
   }
   else if(x>=0&&y>=0){
    ll mn=min(x,y);
    ll mx=max(x,y);
    cout<<b*mn+a*(mx-mn)<<endl;
   }
   else{
    cout<<a*abs(x-0)+a*abs(y-0)<<endl;
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
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


