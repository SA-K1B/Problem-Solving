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
  ll n,i,j,cnt=0;
  string s;
  cin>>s;
  char cur='f';
  if(s[0]!='?')
    cur=s[0];
  else cnt++;
  i=0,j=1;
  ll ans=0;
  while(j<n){
    if(s[j]=='?'){
            ans+=j;
           cnt++;
    }
    else if(s[j]!=s[j-1]){
     if(cnt==0||s[j-1]!='?'){
       ans+=j;
       cur=s[j];
     }
     else if((cnt&1)&&s[j]==cur){
        ans+=j;
        cnt=0;
        cur=s[j];
     }
     else{
      ans+=cnt;

     }
    }
    j++;
  }
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

