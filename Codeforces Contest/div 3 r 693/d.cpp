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
   ll n,a[200005];
   cin>>n;
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   ll t1=0,t2=0;
   ll t=1;
   for(ll i=n-1;i>=0;i--){
     if(t==1){
        if(a[i]%2==0)
            t1+=a[i];
            t=2;
     }
     else {
        if(a[i]%2!=0)
            t2+=a[i];
            t=1;
      }
   }
   if(t1>t2)
    cout<<"Alice"<<endl;
   else if(t1<t2)
    cout<<"Bob"<<endl;
   else
     cout<<"Tie"<<endl;
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
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


