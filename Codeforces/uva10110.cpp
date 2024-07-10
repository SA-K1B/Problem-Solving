#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    ll n;
    while(cin>>n){
        if(n==0)
        break;
    ll s=sqrt(n);
   // cout<<s<<endl;
    if(s*s==n){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
       }
  }
   return 0;
}

