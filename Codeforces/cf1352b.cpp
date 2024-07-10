#include<bits/stdC++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        ll n,k,mul;
        cin>>n>>k;
        if(k%(n-1)==0){
            mul=k;
        }
        else{
                //cout<<"g"<<endl;
            ll a=k/(n-1);
             mul=(n-1)*(a+1);
         // cout<<a<<' '<<mul<<endl;
        }
        //cout<<mul<<endl;
        ll x=mul/(n-1);
        ll x2=x*n;
        ll y=mul-k+1;
        cout<<x2-y<<endl;
    }
    return 0;
}
