#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define vi vector<ll>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
void solve()
{
  ll n;
   cin>>n;
   vector <ll> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.begin()+n);
   ll i=2,j=n-2;
   ll l=a[0]+a[1];
   ll r=a[n-1];
   if(r>l){
    ys;
    return;
   }
   while(i<j){
     l+=a[i];
     r+=a[j];
     if(r>l){
        ys;
        return;
     }
     i++;
     j--;
   }
   no;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
