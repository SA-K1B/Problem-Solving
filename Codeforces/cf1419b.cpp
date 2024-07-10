#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        ll x,cnt=0;
        cin>>x;
      /*  if(x==1){
            cout<<"1"<<endl;
            continue;
        }*/
        ll sum=0,n=0;
        for(ll i=0;;i++){
            ll sum2;
            n+=pow(2,i);
            sum2=(n*(n+1))/2;
            //cout<<sum<<' '<<sum2<<endl;
            if(sum+sum2<=x){
              cnt++;
             sum+=sum2;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
