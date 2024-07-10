#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -1000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;

int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
   ll t;
    cin>>t;
    while(t--){
      map <ll,ll> m;
      ll n,k,a[100005];
      cin>>n>>k;
      for(ll i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]++;
      }
      ll mx=Min,x;
      for(auto it:m){
         if(it.second>mx){
            x=it.first;
            mx=it.second;
         }
      }
      ll cnt=0;
      for(ll i=1;i<=n;){
        if(a[i]!=x){
          cnt++;
          i+=k;
        }
        else i++;
      }
      cout<<cnt<<endl;
    }
    return 0;
}


