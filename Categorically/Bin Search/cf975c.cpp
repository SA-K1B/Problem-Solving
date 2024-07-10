#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  freopen("i.txt","r",stdin);
  ll n,q;
  cin>>n>>q;
  vector<ll>v1(n+3),pre(n+3);
  for(ll i=0;i<n;i++)
    cin>>v1[i];
  pre[0]=v1[0];
  for(ll i=1;i<n;i++)
    pre[i]=pre[i-1]+v1[i];
    ll ptr=0,y=0,rem=0;
  while(q--){
   ll x;
   cin>>x;
   x-=rem;
   if(x==0){
    if(n-ptr-1<=0)
    cout<<n<<endl;
    else cout<<n-ptr-1<<endl;
    rem=0;
    continue;
   }
   else if(x<0){
    cout<<n-ptr<<endl;
    rem-=x;
    continue;
   }
   rem=0;
   x+=y;
   auto pos=lower_bound(pre.begin()+ptr,pre.begin()+n,x)-pre.begin();
   //cout<<ptr<<' '<<pos<<endl;
   if(pos==n){
    cout<<n<<endl;
    y=0;
    rem=0;
    ptr=0;
    continue;
   }
  else if(pre[pos]==x){
    if(n-pos-1<=0)
    cout<<n<<endl;
    else cout<<n-pos-1<<endl;
    ptr=pos+1;
   }
   else{
    rem=pre[pos]-x;
    cout<<n-pos<<endl;
    ptr=pos;
   }
   y=pre[pos];
  }
}
