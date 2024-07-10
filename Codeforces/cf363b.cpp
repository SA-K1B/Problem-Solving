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
    ll n,k,a[150005];
    cin>>n>>k;
    for(ll i=0;i<n;i++)
        cin>>a[i];
        ll sum=0;
    for(ll i=0;i<k;i++){
        sum+=a[i];
    }
    ll ans=sum,ans2=1;
    for(ll i=1;i<=n-k;i++){
     //   cout<<sum<<endl;
         sum-=a[i-1];
         sum+=a[i+k-1];
         if(ans>sum){
         ans=min(ans,sum);
         ans2=i+1;
         }
        // pre=a[i];
    }
    cout<<ans2<<endl;
    return 0;
}

