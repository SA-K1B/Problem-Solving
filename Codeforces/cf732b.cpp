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
    ll n,k,a[505];
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll tt=0;
     for(ll i=0;i<n-1;i++){
          ll sum=a[i]+a[i+1];
          if(sum<k){
            ll dif=k-sum;
            tt+=dif;
             a[i+1]+=dif;
          }
     }
     cout<<tt<<endl;
     for(ll i=0;i<n;i++)
        cout<<a[i]<<' ';

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


