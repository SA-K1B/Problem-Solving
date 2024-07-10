#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <bool> is(100000000);
vector <ll> res;
int main()
{
   // freopen("o.txt","w",stdout);
    ll n,i,j,k,x,mx=100000000;
    res.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0){
         for(ll j=i*i;j<=mx;j+=2*i){
          is[j]=1;
         }
       }
    }
    //cout<<"2"<<endl;
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            //cout<<i<<endl;
            res.push_back(i);
    }
    ll s=res.size();
    for(ll k=0;k<s;k+=100)
        cout<<res[k]<<endl;
}
