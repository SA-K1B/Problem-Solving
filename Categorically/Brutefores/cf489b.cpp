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
    ll n,m,a[105],b[105];
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(ll i=0;i<m;i++)
        cin>>b[i];
     sort(a,a+n);
     sort(b,b+m);
    ll i=0,j=0,ans=0;
    while(i<n&&j<m){
        if(abs(a[i]-b[j])<=1){
            //cout<<i<<' '<<j<<endl;
            ans++;
            i++;
            j++;
           // cout<<i<<' '<<j<<endl;
        }
        else if(a[i]<b[j]){
         // cout<<i<<' '<<j<<endl;
           i++;
        }
        else{
     //     cout<<i<<' '<<j<<endl;
           j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

