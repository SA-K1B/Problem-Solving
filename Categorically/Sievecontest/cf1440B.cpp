#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    ll x,n,t,k;
    vector <int> a;
    cin>>t;
    while(t--){
    vector <int> a;
    ll sum=0;
    cin>>n>>k;
    for(ll i=0;i<n*k;i++){
        cin>>x;
        a.push_back(x);
    }
    if(n%2){
        sum=0;
       ll i=(n/2)*k;
       while(i<n*k){
          sum+=a[i];
         i+=(n/2)+1;
        }
      }
      else{
         sum=0;
       ll i=(n/2-1)*k;
       while(i<n*k){
         sum+=a[i];
         i+=(n/2)+1;
        }
      }
      cout<<sum<<endl;
   }
   return 0;
}
