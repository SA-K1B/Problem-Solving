#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    ll n,a[200005],t;
    cin>>t;
    while(t--){
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    ll tm=0,cnt=0;
    for(ll i=1;i<=n;i++){
            cnt++;
            if(a[i]==cnt){
                tm++;
                cnt=0;
            }
        }
        cout<<tm<<endl;
    }
     return 0;
}
