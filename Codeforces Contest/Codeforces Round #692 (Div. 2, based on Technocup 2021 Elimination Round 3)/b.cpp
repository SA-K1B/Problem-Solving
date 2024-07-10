#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min a-10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll findfr(ll n){
   while(n>10){
    n/=10;
   }
   return n;
}
bool isvalid(ll k){
  ll s1=k;
  while(s1>0){
  //  cout<<s1<<endl;
    ll rem=s1%10;
    if(rem!=0&&k%rem!=0){
        return false;
    }
    s1=s1/10;
  }
  return true;
}
ll test(ll n){
  while(1){
 //cout<<f<<endl;
    if(isvalid(n))
        return n;
        n++;
  }
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
       // ll fr=findfr(x);
       // cout<<fr<<endl;
       ll ans=test(x);
       cout<<ans<<endl;
    }
    return 0;
}

