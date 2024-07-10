#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
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
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  int n;
   cin>>n;
  string s,r="";
  cin>>s;
  for(int i=0;i<n;i+=2){
    if(s[i]=='0'&&s[i+1]=='0')
      r+='A';
     else if(s[i]=='0'&&s[i+1]=='1')
      r+='T';
     else if(s[i]=='1'&&s[i+1]=='0')
      r+='C';
    else
      r+='G';
  }
  cout<<r<<endl;
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

