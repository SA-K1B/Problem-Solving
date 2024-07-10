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

int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,a[105],b[105],m;
        cin>>n;
        for(ll i=0;i<n;i++)
            cin>>a[i];
            cin>>m;
        for(ll i=0;i<m;i++)
            cin>>b[i];
      ll temp1=a[0],mx1=a[0];
       for(ll i=1;i<n;i++){
          temp1+=a[i];
          if(temp1>=mx1){
            mx1=temp1;
          }
       }
    //   cout<<mx1<<endl;
       ll temp2=b[0],mx2=b[0];
       for(ll i=1;i<m;i++){
          temp2+=b[i];
          if(temp2>=mx2){
            mx2=temp2;
          }
       }
      // cout<<mx2<<endl;
      ll mx;
      if(mx1<=0&&mx2<=0)
            mx=0;
      else if(mx2<=0)
         mx=mx1;
      else if(mx1<=0){
        mx=mx2;
      }
      else mx=mx1+mx2;
      ll zero=0;
      cout<<max(zero,mx)<<endl;
    }
    return 0;
}


