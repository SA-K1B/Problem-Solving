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
  int n;
   cin>>n;
   vector <int> a(n+5);
   a[n]=n;
   int f=0;
   for(int i=n-1;i>=1;i--){
     if(f==0){
     a[i]=a[i+1]-i;
     f=1;
     }
     else{
        a[i]=a[i+1]+i;
        f=0;
     }
   }
   for(int i=1;i<=n;i++)
    cout<<a[i]<<' ';
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

