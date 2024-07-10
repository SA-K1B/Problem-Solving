#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;

int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
   // ios_base::sync_with_stdio(false);
  //  cin.tie(NULL);
    ll w,h;
    cin>>w>>h;
   /* if(w%2)
       ll w2-=1;
     if(h%2)
       ll h2-=1;*/
        ll sum=0;
    if(w>=h){
        for(ll i=1;i<h;i+=2){
           ll ans=(w-i)+1;
           ll ans2=(h-i)+1;
            sum+=ans*ans2;
        }
        cout<<sum<<endl;
    }
     else{
        for(ll i=2;i<=w;i+=2){
           ll ans=(h-i)+1;
           ll ans2=(w-i)+1;
            sum+=ans*ans2;
        }
        cout<<sum<<endl;
    }
    return 0;
}

