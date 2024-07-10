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
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,ans;
    cin>>t;
    while(t--){
       ll x,sum=0;
       cin>>x;
       for(ll i=1;;i++){
        sum+=i;
        if(x==sum){
            ans=i;
            break;
        }
        else if(x==sum-1){
            ans=i+1;
            break;
         }
         else if(sum>x){
            ans=i;
            break;
         }
       }
       cout<<ans<<endl;
    }
    return 0;
}


