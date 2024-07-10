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
   int n,i,j;
   string s;
   cin>>s;
   n=s.size();
   i=n-1;
   int one=count(s.begin(),s.end(),'1');
   if(one==1){
    cout<<n-1<<endl;
    return;
   }
   while(s[i]!='1'){
    i--;
   }
   //cout<<one<<endl;
   int zero=n-i-1,ans=0;
   while (i>=0)
   {
    if(s[i]=='0'){
       ans+=zero+1;
       zero=1;
    }
    else zero++;
    i--;
    //cout<<ans<<endl;
    /* code */
   }
   cout<<ans+zero+1<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
