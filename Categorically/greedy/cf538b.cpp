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
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    vector <ll> a(10,);
    ll n,a[10]={0};
    cin>>n;
    ll r=1;
    ll mx=Min;
    while(n>0){
        ll rem=n%10;
        mx=max(mx,rem);
        for(ll i=0;i<rem;i++){
            a[i]+=r;
        }
        n/=10;
        r*=10;
    }
    cout<<mx<<endl;
   for(ll i=0;i<mx;i++)
    cout<<a[i]<<' ';
    return 0;
}

