#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  ll n;
   cin>>n;
   if(n==2){
    cout<<"1"<<endl;
    return;
   }
   else if(n==4){
    cout<<"3"<<endl;
    return;
   }
   ll a=0,b=0;
   for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      ll x=n/i;
      if(x==i)
        b++;
      else a++;
    }
   }
  ll ans;
   if((b>0)&&(n&1)){
    ans=(((2*a)+1)*2)+2;
   }
   else {
        ans=(((2*a)+1)*2)+b;
        if((n&1)==0&&b==0)
            ans--;
   }
   cout<<ans<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

