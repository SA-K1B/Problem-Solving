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
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
        return 0;
    }
    ll ans;
    for(ll i=1;i<=31;i++){
        ll p1=ceil(pow(2,i));
        ll p2=ceil(pow(2,i+1));
        if(n>=p1&&n<p2){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
        return 0;
}

