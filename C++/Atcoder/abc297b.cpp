#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define fr(i,n,j) for(i=j;i<n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"Yes"<<endl
#define no cout<<"No"<<endl
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
   string s;
   cin>>s;
   int l=0,r=0,lr=0,rr=0,k;
   for(i=0;i<8;i++){
     if(s[i]=='B'){
     if(l==0)
       l=i+1;
     else r=i+1;  
     }
     else if(s[i]=='R'){
     if(lr==0)
       lr=i+1;
     else rr=i+1;  
     }
     else if(s[i]=='K')
      k=i+1;
   }
   if(((l+r)%2==1)&&(k>lr&&k<rr))
   ys;
   else no;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    ///cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
