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
ll check(ll x){
   ll cnt=0;
   while(x>1){
    x>>=1;
    cnt++;
   }
   return (1ll<<cnt);
}
void solve()
{
  ll n;
   cin>>n;
   if(n==1){
    cout<<"1"<<"\n"<<"1"<<endl;
    return;
   }
   if(n&1){
    cout<<"-1"<<endl;
    return;
   }
   vi r1,r2;
   ll cur=check(n);
   ll d1=n-cur+1;
   ll d2=cur-d1;
   ll tmp=n;
   while(d2>=1){
    ll i=tmp,j=d2;
    while(j<i){
      r1.pb(i);
      r2.pb(j);
      j++;
      i--;
    }
    tmp=d2-1;
    if(tmp<=0)
        break;
     cur=check(tmp);
    d1=tmp-cur+1;
    d2=cur-d1;
   }
   for(auto it:r1)
    cout<<it<<' ';
  for(auto it:r2)
    cout<<it<<' ';
   cout<<endl;
  for(auto it:r2)
    cout<<it<<' ';
   for(auto it:r1)
    cout<<it<<' ';
   cout<<endl;
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

