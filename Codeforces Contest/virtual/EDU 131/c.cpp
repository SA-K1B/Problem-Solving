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
int n,m;
map<int,int>mp;
bool ok(int val){
  int rem=m;
  ll nxt=0;
   for(int i=1;i<=n;i++){
    int tmp=val;
    int w=mp[i];
    if(tmp>=w){
      tmp-=w;
      rem-=w;
    }
    else{
      rem-=tmp;
      tmp=0;
    }
    nxt+=(ll) (tmp/2);
   }
   ll remp2=(ll) rem;
   if(remp2>nxt)
   return 0;
   else return 1;
}
void solve()
{
  int i,j;
   cin>>n>>m;
   //vector <int> a(n+5);
   for(i=0;i<m;i++){
    int x;
    cin>>x;
    mp[x]++;
   }
   int l=0,h=m*2;
   int ans=Max;
   while (l<=h)
   {
    int mid=(l+h)/2;
    if(ok(mid)){
      ans=min(ans,mid);
      h=mid-1;
    }
    else l=mid+1;
    //cout<<ans<<endl;
    /* code */
   }
   cout<<ans<<endl;
   mp.clear();
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
