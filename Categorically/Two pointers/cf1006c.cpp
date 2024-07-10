#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a[200005];
    cin>>n;
    for(ll i=0;i<n;i++)
     cin>>a[i];
   //  for(ll i=0;i<n;i++)
   //  cout<<a[i];
    ll i=0,j=n-1,sum1=0,sum2=0;
    ll ans=0;
    sum1+=a[0];
    sum2+=a[n-1];
    while(i<j){
      //   cout<<sum1<<' '<<sum2<<endl;
       if(sum1>sum2){
         j--;
         sum2+=a[j];
       }
       else if(sum1<sum2){
        i++;
        sum1+=a[i];
       }
       else{
        ans=sum1;
        i++;
        j--;
        sum1+=a[i];
        sum2+=a[j];
       }
    }
    cout<<ans<<endl;
    return 0;
}

