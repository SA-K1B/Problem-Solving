#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
void solve()
{
   ll n;
   cin>>n;
   string s1;
   cin>>s1;
   ll i,ans=-1;
   for(i=0;i<s1.size()-1;i++){
    if(s1[i]>s1[i+1]){
        ans=i;
        break;
    }
   }
   if(ans==-1)
    cout<<"NO"<<endl;
   else{
        cout<<"YES"<<endl<<ans+1<<' '<<ans+2<<endl;
   }
   /*for(ll i=0;i<n;i++)
    cin>>a[i];*/
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}

