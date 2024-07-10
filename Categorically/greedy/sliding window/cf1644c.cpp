#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define fr(i,n,j) for(i=j;i<n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
   int n,i,j,x;
   cin>>n>>x;
   vector <int> a(n+5);
   for(i=1;i<=n;i++){
    cin>>a[i];
   }
   vi v;
   for(int i=1;i<=n;i++){
     int sum=0;
     for(int j=1;j<=i;j++)
        sum+=a[j];
        int mx=sum;
     int f=1,l=i+1;
     while(l<=n){
       sum-=a[f];
       sum+=a[l];
       mx=max(mx,sum);
       f++;
       l++;
     }
     v.pb(mx);
     //cout<<mx<<endl;
   }
   //cout<<mx2<<' '<<ind<<endl;
   for(int i=0;i<=n;i++){
      int ans=Min;
      for(int j=0;j<v.size();j++){
          ans=max(v[j]+min(j+1,i)*x,ans);
      }
      cout<<max(0,ans)<<' ';
   }
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

