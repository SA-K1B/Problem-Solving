#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000000000000000
int main()
{
    freopen("i.txt","r",stdin);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll mn=max;
    for(ll k=1;;k++){
            ll cnt=0,p=1,f=0;
        for(int i=0;i<n;i++){
            cnt+=abs(p-a[i]);
            p*=k;
            if(cnt>mn){
                f=1;
                break;
            }
        }
        if(f)
            break;
        mn=cnt;
    }
    cout<<mn<<endl;
    return 0;
}
