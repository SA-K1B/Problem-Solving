#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
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
  int n,m;
   cin>>n>>m;
   /*vector <int> a(n+5);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }*/
  vi v1,v2;
  string s1,s2;
  cin>>s1>>s2;
  int i=0,j=0;
  while(j<m){
    if(s2[j]==s1[i]){
        v1.pb(i);
        j++;
    }
    i++;
  }
  i=n-1,j=m-1;
  while(j>=0){
    if(s2[j]==s1[i]){
        v2.pb(i);
        j--;
    }
    i--;
  }
  rv(v2);
  int ans=Min;
  j=1;
  while(j<m){
    ans=max(ans,v2[j]-v1[j-1]);
    j++;
  }
  cout<<ans<<endl;
}
int main()
{
    fast;
     freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

