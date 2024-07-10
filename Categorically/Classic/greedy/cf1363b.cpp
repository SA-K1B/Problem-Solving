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
   string s1;
   cin>>s1;
   ll n=s1.size();
   //cin>>n;
   ll tz=0,to=0,z=0,o=0;
   ll j=0;
   while(j<n){
    if(s1[j]=='1')
        to++;
    else tz++;
    j++;
   }
   j=0;
   ll zto,otz,ans=Max;
   while(j<n){
    if(s1[j]=='1')
        o++;
    else z++;
    zto=z+to-o;
    otz=o+tz-z;
    //cout<<zto<<' '<<otz<<endl;
    ans=min(ans,min(zto,otz));
    j++;
   }
   cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


