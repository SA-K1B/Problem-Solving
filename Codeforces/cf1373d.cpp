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
   ll sum=0;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    if(i%2==0)
        sum+=a[i];
    }
    cout<<sum<<endl;
    ll mx=Min,pos=0,neg=0;
    for(ll i=0;i<n-1;i+=2){
    if(a[i]<=a[i+1])
     pos+=a[i+1]-a[i];
    else neg+=a[i]-a[i+1];
    if(pos>=neg){
       mx=max(mx,sum+pos-neg);
       cout<<mx<<endl;
      }
    else{
        pos=0;
        neg=0;
    }
  }
  cout<<mx<<endl;
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


