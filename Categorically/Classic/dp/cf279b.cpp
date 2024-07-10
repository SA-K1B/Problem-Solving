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
    ll t,n,a[100005];
    cin>>n>>t;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll sum=0,k,ans=Min,j=-1,i=0;
    while(i<n){
       if(sum+a[i]<=t){
        sum+=a[i];
       }
       else{
            sum+=a[i];
         while(sum>t){
            j++;
            sum-=a[j];
         }
       }
       ans=max(ans,i-j);
    //   cout<<ans<<endl;
       i++;
    }
    cout<<ans<<endl;
    return 0;
}


