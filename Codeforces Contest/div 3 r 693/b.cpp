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
   ll n;
   ll a[3]={0};
   ll sum=0;
   cin>>n;
   for(ll i=1;i<=n;i++){
     ll x;
     cin>>x;
     sum+=x;
     if(x==1)
        a[1]++;
     else a[2]++;
   }
   if(a[1]==0){
    if(a[2]%2==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   else if(a[2]==0){
    if(a[1]%2==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   else{
    if(sum%2==0)
         cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


