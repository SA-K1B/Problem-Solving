#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll j=1;
    for(ll i=19;;i++){
        //cout<<i<<endl;
      ll x=i;
      ll sum=0;
      while(x>0){
        ll rem=x%10;
        sum+=rem;
        x/=10;
      }
      if(sum==10){
        if(j==n){
            cout<<i<<endl;
            break;
        }
        else j++;
      }
    }
    return 0;
}
