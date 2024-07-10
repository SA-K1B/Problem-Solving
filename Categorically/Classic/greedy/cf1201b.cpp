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
    ll n,a[100005];
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2)
        cout<<"NO"<<endl;
    else{
        sum-=a[n-1];
        if(a[n-1]<=sum)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

