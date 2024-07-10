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
   int n,i,j,k;
   cin>>n>>k;
   string s1,s2,s3,s4;
   cin>>s1>>s2;
   if(s1==s2){
    ys;
    return;
   }
   s4=s2;
   s3=s1;
   srt(s4);
   srt(s3);
   if(s3!=s4){
    cout<<"no"<<endl;
    return;
   }
   if(n<=k){
    no;
    return;
   }
   if(n<2*k){
    for(i=n-k;i<k;i++){
    if(s1[i]!=s2[i]){
        no;
        return;
     }
    }
   }
   cout<<"yes"<<endl;
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