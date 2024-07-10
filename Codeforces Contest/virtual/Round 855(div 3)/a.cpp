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
   string s,ans="";
   int n;
   cin>>n;
   cin>>s;
   transform(s.begin(), s.end(), s.begin(), ::toupper);
   //cout<<s<<endl;
   int a[30]={0};
   for(auto it:s){
    if(a[it-'A']==0){
      for(int i=0;i<=30;i++)
        a[i]=0;
      ans+=it;
      a[it-'A']=1;
    }
   }
   //cout<<ans<<endl;
   if(ans=="MEOW")
   ys;
   else no;   
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
