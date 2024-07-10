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
   string s;
   cin>>s;
   int ab=0,ba=0;
   int n=s.size();
   if(n==1){
    cout<<s<<endl;
    return;
   }
   int i=1;
   while (i<n)
   {
    if(s[i]=='b'&&s[i-1]=='a')
       ab++;
    else if(s[i]=='a'&&s[i-1]=='b')
       ba++;
    i++;   
    /* code */
   }
   if(ab==ba){
    cout<<s<<endl;
    return;
   }
   if(ab>ba)
      s[0]='b';
   else s[0]='a';   
   cout<<s<<endl;
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
