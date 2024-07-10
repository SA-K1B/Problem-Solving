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
   int n,i,j;
   cin>>n;
   vector <int> a(n+5);
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   srtn(a,n);
   vi v(n+5);
   int p=0;
   v[0]=1;
   for(i=1;i<n;i++){
    if(a[i]==a[i-1]){
      v[p]++;
    }
    else{
        p++;
        v[p]++;
    }
   }
   srtn(v,p+1);
   map <int,int> mp;
   for(int i=0;i<=p;i++){
    mp[v[i]]++;
   }
   int need,tot=n,ele=p+1,pre,ans=Max;
   for(i=0;i<=p;i++){
    if(i==0){
     need=tot-(ele-i)*v[i];
    }
    else{
        if(v[i-1]==v[i])
         continue;
        need=pre+(mp[v[i-1]]*v[i-1])-(v[i]-v[i-1])*(ele-i);
    }
   // cout<<need<<endl;
    pre=need;
    ans=min(ans,need);
   }
   cout<<ans<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
