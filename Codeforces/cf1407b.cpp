#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        ll n,cost=0;
        cin>>n;
        ll a[n];
        for(int ll i=0;i<n;i++)
            cin>>a[i];
        ll ps=0;
        for(int ll i=0;i<n;i++){
            if(a[i]>=0)
                ps+=a[i];
            else{
               if(ps>=-1*a[i]){
                ps=ps-(-1*a[i]);
                a[i]=0;
               }
               else{
                a[i]=a[i]+ps;
                ps=0;
               }
            }
        }
        for(ll i=0;i<n;i++){
            if(a[i]<0)
                cost+=a[i]*-1;
        }
        cout<<cost<<endl;
    }
    return 0;
}
