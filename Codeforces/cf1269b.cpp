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
   int n,i,j,m;
   cin>>n>>m;
   vector <int> a(n+5),b(n+5);
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<n;i++){
    cin>>b[i];
   }
   srtn(a,n);
   srtn(b,n);
   int f=0;
   for(i=0;i<n;i++){
    if(a[i]!=b[i]){
        f=1;
        break;
    }
   }
   if(f==0){
    cout<<"0"<<endl;
    return;
   }
    f=0;
   for(i=0;i<n;i++){
    if(a[i]>=b[i]){
        f=1;
        break;
    }
   }
   if(f==0){
    cout<<b[0]-a[0]<<endl;
    return;
   }
   set <int> st;
   for(i=0;i<n;i++){
    st.insert(b[0]+m-a[i]);
   }
   for(auto it: st){
    vi v;
     for(i=0;i<n;i++){
        v.pb((a[i]+it)%m);
     }
     srt(v);
     f=0;
     for(i=0;i<n;i++){
        if(v[i]!=b[i]){
            f=1;
            break;;
        }
     }
     if(f==0){
        cout<<it<<endl;
        return;
     }
   }
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
