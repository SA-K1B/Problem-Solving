#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   // vector <int> v;
    ll d,f=0,i,x,y;
    cin>>x;
    for(ll j=2;j*j<=x;j++){
        if(x%j==0){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"1"<<' '<<x<<endl;
        return 0;
    }
    ll sq=ceil(sqrt(x));
    //cout<<sq<<endl;
    for( i=1;i<=sq;i++){
        if(x%i==0){
          if(__gcd(i,x/i)==1)
            d=i;
        }
    }
    //sort(v.begin(),v.end());
    if(d)
            cout<<min(d,x/d)<<' '<<max(d,x/d)<<endl;
       else cout<<"1"<<' '<<x<<endl;
    return 0;
}
