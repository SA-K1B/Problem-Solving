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
   ll vis[1005];
   memset(vis,0,sizeof(vis));
   ll n,a[1005];
   cin>>n;
   for(ll i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
   vector <ll> div;
   vector <ll> res;
   res.pb(a[n-1]);
   for(ll i=1;i*i<=a[n-1];i++){
    if(a[n-1]%i==0){
      //  cout<<i<<endl;
        div.pb(i);
    if(a[n-1]/i!=i){
     //     cout<<a[n-1]/i<<endl;
        div.pb(a[n-1]/i);
      }
    }
   }
   sort(div.begin(),div.end());
   /*for(auto it:div)
    cout<<it<<' ';
   cout<<endl;*/
   ll sz=div.size();
   for(ll i=sz-1;i>=0;i--){
      ll f=0;
     for(ll k=0;k<res.size();k++){
        if(res[k]%div[i]!=0){
            f=1;
            break;
        }
     }
     if(f==0){
     for(ll j=n-2;j>=0;j--){
         if(a[j]%div[i]==0&&vis[j]==0){
         res.pb(a[j]);
         vis[j]=1;
        }
       }
     }
   }
   for(auto it:res)
    cout<<it<<' ';
   cout<<endl;
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
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


