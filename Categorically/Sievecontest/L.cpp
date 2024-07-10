#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[3005];
void factor(ll mx){
    for(ll i=2;i<=mx;i++){
       if(f[i]==0){
          for(ll j=i+i;j<=mx;j+=i){
                    f[j]++;
     }
   }
 }
}
int main()
{
    //freopen("i.txt","r",stdin);
    ll n,cnt=0;;
    cin>>n;
    factor(n);
    //sort(res.begin(),res.end());
    for(int i=6;i<=n;i++){
        if(f[i]==2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


