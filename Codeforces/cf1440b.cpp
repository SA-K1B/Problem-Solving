#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        ll x,n,k;
        vector <ll> a;
        cin>>n>>k;
        for(ll i=1;i<=n*k;i++){
            cin>>x;
            a.push_back(x);
        }
        ll sum=0;
        if(n==2){
            ll p=0;
            while(p<n*k){
                sum+=a[p];
                p+=2;
            }
            cout<<sum<<endl;
            continue;
        }
        else if(n==1){
            ll p=0;
            while(p<n*k){
                sum+=a[p];
                p++;
            }
            cout<<sum<<endl;
            continue;
        }
        ll p=k+((n-1)/2)-1;
        while(p<(n*k)){
            sum+=a[p];
            p+=(n-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
