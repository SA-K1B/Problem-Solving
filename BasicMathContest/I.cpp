#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    ll n,a[200005];
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll mx=a[n-1];
    a[0]=mx-a[0];
    ll res=a[0];
    ll sum=a[0];
    for(ll i=1;i<n;i++){
            a[i]=mx-a[i];
            sum+=a[i];
            res=__gcd(res,a[i]);
    }
    cout<<sum/res<<' '<<res<<endl;
    return 0;
}
