#include<bits/stdc++.h>
#define ll long long
#define INF -1000000
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    ll n,a[2005];
    cin>>n;
    ll mn=INF,f=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=mn){
        //cout<<<<endl;
            f=1;
        }
        else mn=a[i];
    }
    if(f==0){
        cout<<"0"<<endl;
        return 0;
    }
      ll r;
      cout<<n+1<<endl;
    for(ll i=n-1;i>=0;i--){
      if(a[i]%n==0){
        r=a[i]+i;
      }
      else{
        ll x1=(a[i]/n);
          r=(x1+1)*n+i;
      }
      ll x=r-a[i];
    //  cout<<r<<' '<<x<<endl;
      for(ll j=0;j<i;j++){
        a[j]+=x;
      }
      printf("%d %d %d\n",1,i+1,x);
    }
      printf("%d %d %d\n",2,n,n);
      return 0;
}
