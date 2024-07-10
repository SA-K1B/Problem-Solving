#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    ll n,a[100005];
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        ll sum=a[0],cnt=1;
      for(ll i=1;i<n;i++){
             if(sum<=a[i]){
                cnt++;
                sum+=a[i];
             }
      }
      cout<<cnt<<endl;
      return 0;
}

