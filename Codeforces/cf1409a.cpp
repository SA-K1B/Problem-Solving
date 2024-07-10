#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //  freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
        continue;
    }
    if(b>a){
        ll x=(b-a)/10;
        if((x*10)==(b-a)){
            cout<<x<<endl;
        }
        else cout<<x+1<<endl;
    }
    else{
        ll x=(a-b)/10;
        if((x*10)==(a-b)){
            cout<<x<<endl;
        }
        else cout<<x+1<<endl;
    }
 }
    return 0;
}
