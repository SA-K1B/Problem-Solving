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
 ll n,a[3005],cnt;
 bool isvalid(ll y){
    ll sum=0;
     cnt=0;
     ll j=0;
     for(ll i=0;i<n;i++){
        sum+=a[i];
        if(sum==y){
            cnt+=(i-j);
            j=i+1;
            sum=0;
        }
        else if(sum>y)
            return false;
     }
     return true;
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
        cin>>n;
        ll sum1=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        ll ans=Max;
        for(ll i=1;i*i<=sum1;i++){
            if(sum1%i==0){
                ll f1=i;
                ll f2=sum1/i;
                if(isvalid(f1))
                   ans=min(ans,cnt);
                if(isvalid(f2))
                    ans=min(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


