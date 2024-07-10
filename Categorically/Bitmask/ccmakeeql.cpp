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
  int a,b,c;
   cin>>a>>b>>c;
   int f=0;
   for(int i=0;i<=31;i++){
     if(a==b&&b==c){
        f=1;
        break;
     }
     int x=(a>>i)&1;
     int y=(b>>i)&1;
     int z=(c>>i)&1;
    int sum=x+y+z;
    if(sum==1){
        if(x==1)
            a+=(1<<i);
        else if(y==1)
            b+=(1<<i);
         else c+=(1<<i);
    }
    else if(sum==2){
        if(x==0)
            a+=(1<<i);
        else if(y==0)
            b+=(1<<i);
         else c+=(1<<i);
    }
    else
        break;
   }
   if(f)
    ys;
    else no;
   /*vector <int> a(n+5);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }*/
 // string s;
 // cin>>s;
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

