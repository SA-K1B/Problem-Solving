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
   ll w,h,n;
   cin>>w>>h>>n;
   ll t1=1;
   while(w%2==0){
    t1*=2;
    w/=2;
   }
   ll t2=1;
   while(h%2==0){
    t2*=2;
    h/=2;
   }
   ll t3=t1*t2;
 //  cout<<t3<<endl;
   if(t3>=n)
    cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
     //   cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


