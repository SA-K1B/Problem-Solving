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
  ll a,b,n,i,j;
   cin>>a>>b>>n;
   if(a==b){
    cout<<"0"<<endl;
    return;
   }
   i=0;
   ll lgbe=0;
   while((a>0)||(b>0)){
    ll x=a&1;
    ll y=b&1;
 //   cout<<a<<' '<<b<<endl;
    if(x!=y){
        lgbe=lgbe|(1ll<<i);
    }
    a=a>>1;
    b=b>>1;
    i++;
   }
  // cout<<lgbe<<endl;
   ll tmp=lgbe,lf;
   j=0;
   while(tmp){
    if(tmp&1){
        lf=j;
    }
    tmp=tmp>>1;
    j++;
   }
   ll tmp2=(1ll<<lf);
   //cout<<tmp2<<endl;
   if(tmp2>=n){
    cout<<"-1"<<endl;
   }
   else if(lgbe<n){
    cout<<"1"<<endl;
   }
   else cout<<"2"<<endl;
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

