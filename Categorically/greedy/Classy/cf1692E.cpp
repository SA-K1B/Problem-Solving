#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nop cout<<"-1"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  int n,s;
   cin>>n>>s;
   int sum=0;
   vector <int> a(n+5);
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
   }
   if(s>sum){
    nop;
    return;
   }
   int l=0,r=0,cur=0,mx=Min;
   while(l<n){
     while(r<n&&cur+a[r]<=s){
        cur+=a[r];
        r++;
     }
    // cout<<r<<' '<<l<<endl;
     mx=max(mx,r-l);
     cur-=a[l];
     l++;
   }
   cout<<n-mx<<endl;
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

