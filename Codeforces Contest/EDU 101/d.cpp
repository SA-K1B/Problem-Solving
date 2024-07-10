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
  //string s1;
  // cin>>s1;
   ll n;
   cin>>n;
   if(n==3){
    cout<<"2"<<endl;
    cout<<"3"<<' '<<"2"<<endl;
    cout<<"3"<<' '<<"2"<<endl;
   }
   else if(n<=256){
    cout<<n+5<<endl;
    for(ll i=3;i<n;i++)
      cout<<i<<' '<<i+1<<endl;
   int k=8;
   while(k--){
    cout<<n<<' '<<"2"<<endl;
   }
 }
 else{
     cout<<n+5<<endl;
    for(ll i=3;i<n;i++){
      if(i==16)
        continue;
      cout<<i<<' '<<i+1<<endl;
    }
   int k=5;
   while(k--){
    cout<<n<<' '<<"16"<<endl;
   }
   k=4;
   while(k--){
    cout<<"16"<<' '<<"2"<<endl;
   }
 }
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


