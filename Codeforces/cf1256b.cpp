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
   ll n,a[105];
   cin>>n;
   for(ll i=0;i<n;i++)
    cin>>a[i];
   ll p=0;
   while(p<n){
    auto pos=min_element(a+p,a+n)-a;
    cout<<a[pos]<<' ';
    if(p==pos){
        p++;
        continue;
    }
    while(p<pos-1){
        cout<<a[p]<<' ';
        p++;
    }
    a[pos]=a[pos-1];
    p=pos;
   }
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
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


