#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   freopen("i.txt","r",stdin);
   ll n;
   cin>>n;
   cout<<n<<endl;
   vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }
   vector <ll> v1;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v1.pb(x);
   }
   for(ll i=0;i<n;i++)
      cout<<v[i]<<' ';
      cout<<endl;
   for(ll i=0;i<n;i++)
      cout<<v1[i]<<' ';
      cout<<endl;   
   cout<<"e"<<endl;
   ll dp[3][100005];
  // cout<<"a"<<endl;
   dp[1][0]=v[0];
   dp[2][0]=v1[0];
   for(ll i=1;i<n;i++){
     //cout<<"a"<<endl;
     dp[1][i]=max(dp[2][i-1]+v[i],dp[1][i-1]);
     dp[2][i]=max(dp[1][i-1]+v1[i],dp[2][i-1]);
  }
  //cout<<"r"<<endl;
    cout<<max(dp[1][n-1],dp[2][n-1]);
}