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
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
}
void solve()
{
 //  cin>>n;
   string s1;
   cin>>s1;
   ll used[100005];
   ll sz=s1.size();
   for(ll i=0;i<sz;i++)
      used[i]=0;
   ll f=0,ans=0,j=1;
   while(j<sz){
    if(s1[j]==s1[j-1]&&!used[j-1])
      f=1;
   if(j>1&&s1[j]==s1[j-2]&&!used[j-2])
      f=1;
   used[j]=f;
   j++;
   ans+=f;
   f=0;
   }
   cout<<ans<<endl;
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
    cin>>t;
    for(int i=1;i<=t;i++){
     //   cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


