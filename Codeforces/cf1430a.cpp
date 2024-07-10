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
   /*for(ll i=0;i<n;i++)
    cin>>a[i];*/
   if(n==1||n==2||n==4)
    cout<<"-1"<<endl;
   else if(n%3==0)
        cout<<n/3<<' '<<"0"<<' '<<"0"<<endl;
   else if(n%3==1)
        cout<<n/3-2<<' '<<"0"<<' '<<"1"<<endl;
   else if(n%3==2)
        cout<<n/3-1<<' '<<"1"<<' '<<"0"<<endl;
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


