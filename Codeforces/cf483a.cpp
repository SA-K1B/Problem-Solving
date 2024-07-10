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
   ll n,r,l;
   cin>>r>>l;
   if(l-r<=1){
    cout<<"-1"<<endl;
    return;
   }
   else{
       if(l-r==2){
        if(l%2)
            cout<<"-1"<<endl;
        else{
            cout<<r<<' '<<r+1<<' '<<l<<endl;
        }
       }
       else{
        if(r%2)
            cout<<r+1<<' '<<r+2<<' '<<r+3<<endl;
        else cout<<r<<' '<<r+1<<' '<<r+2<<endl;
       }
   }
   /*for(ll i=0;i<n;i++)
    cin>>a[i];*/
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


