#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <bool> is(100000000);
vector <ll> res;
int main()
{
    freopen("i.txt","r",stdin);
   // freopen("o.txt","w",stdout);
    ll n,i,j,k,x,mx=87000008;
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
    ll q,h;
    cin>>q;
    while(q--){
        cin>>h;
        cout<<res[h-1]<<endl;
    }
    return 0;
}

