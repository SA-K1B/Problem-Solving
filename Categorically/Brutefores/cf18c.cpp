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
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll a[100005];
        cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll temp=0,ans=0;
    for(ll i=0;i<n;i++){
       temp+=a[i];
       if((sum-temp)==temp)
         ans++;
    }
    if(sum==0)
    cout<<ans-1<<endl;
    else
        cout<<ans<<endl;
    return 0;
}

