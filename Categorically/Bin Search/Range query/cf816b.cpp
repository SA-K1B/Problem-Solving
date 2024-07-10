#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define pi acos(-1.0)
#define fr(i,n,j) for(i=j;i<n;i++)
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
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  int n,k,q,i,j;
   cin>>n>>k>>q;
   vi a(n+3),b(n+3);
   fr(i,n,0){
      cin>>a[i]>>b[i];
   }
   srtn(a,n);
   srtn(b,n);

   vi pre(200005,0);
   for(i=1;i<=200000;i++){
    auto pos1=upper_bound(a.begin(),a.begin()+n,i)-a.begin();
    auto pos2=lower_bound(b.begin(),b.begin()+n,i)-b.begin();
    int x=n-pos1;
    int y=n-pos2;
    int xy=abs(x-y);
    if(i>1)
    pre[i]=pre[i-1];
    if(xy>=k){
        pre[i]++;
    }
   }
   while(q--){
    int x1,y1;
    cin>>x1>>y1;
    if(x1==1){
        cout<<pre[y1]<<endl;
    }
    else{
        cout<<pre[y1]-pre[x1-1]<<endl;
    }
   }
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

