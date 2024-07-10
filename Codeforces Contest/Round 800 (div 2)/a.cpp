#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
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
  int a,b;
   cin>>a>>b;
  string s="";
  int f=0;
  while(a>0||b>0){
    if(f==0&&a>0){
        s+='0';
        f=1;
        a--;
    }
   else if(f==1&&b>0){
        s+='1';
        f=0;
        b--;
    }
    else if(a>0){
        while(a--){
            s+='0';

        }
    }
    else{
      while(b--){
            s+='1';

        }
    }
  }
  cout<<s<<endl;
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

