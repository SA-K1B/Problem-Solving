#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[n-1]<x){
            cout<<"0"<<endl;
            continue;
        }
        ll y,nw,need,ex=0,cnt=0;
        for(ll i=n-1;i>=0;i--){
            if(a[i]>=x){
                cnt++;
                ex+=(a[i]-x);
            }
            else{
                need=x-a[i];
                if(ex>=need){
                    cnt++;
                    ex-=need;
                }
                else break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
