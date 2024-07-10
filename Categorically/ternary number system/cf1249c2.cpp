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
   ll n2=n;
   vector <ll> v;
   while(n>0){
    v.pb(n%3);
    n/=3;
   }
   //reverse(v.begin(),v.end());
   ll sz=v.size();
   ll left2,left0=sz,f=0;
   for(ll i=0;i<sz;i++){
   if(v[i]==2){
        left2=i;
        f=1;
    }
 }
   if(f==0){
    cout<<n2<<endl;
    return;
   }
   for(ll i=left2+1;i<sz;i++){
   if(v[i]==0){
        left0=i;
        break;
    }
 }
   if(left0==sz){
    db ans1=ceil(pow(3,sz));
    ll ans=ans1;
    cout<<ans<<endl;
   }
   else{
    ll ans=0,ans2;
    db ans1;
    for(ll i=left0;i<sz;i++){
         if(i==left0)
            v[i]=1;
         ans1=ceil(pow(3,i));
         ans2=ans1*v[i];
        ans+=ans2;
     }
   cout<<ans<<endl;
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
    for(int j=1;j<=t;j++){
     //   cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}
