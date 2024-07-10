
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
  int n,x;
   cin>>n>>x;
   double a=ceil(n/2.0);
   ll a1=a;
   if(x>a){
    cout<<"-1"<<endl;
    return;
   }
   if(n&1){
    string fs;
    ll y=x-1,j=0;
    ll sp=n/2;
    while(y){
      fs+='a'+j;
      j++;
      y--;
      sp--;
    }
    while(sp){
        fs+='a';
        sp--;
    }
    string r;
    r+=fs;
    rv(fs);
    r+='a'+j;
    r+=fs;
    cout<<r<<endl;
   }
    else{
    string fs;
    ll y=x,j=0;
    ll sp=n/2;
    while(y){
      fs+='a'+j;
      j++;
      y--;
      sp--;
    }
    while(sp){
        fs+='a';
        sp--;
    }
    string r;
    r+=fs;
    rv(fs);
    r+=fs;
    cout<<r<<endl;
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
