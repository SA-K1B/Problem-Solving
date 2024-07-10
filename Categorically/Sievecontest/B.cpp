#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[3005];
vector <int> res;
void factor(){
    ll mx=3000;
    for(ll i=2;i<=mx;i++){
       if(f[i]==0){
          for(ll j=i+i;j<=mx;j+=i){
                    f[j]++;
                    if(f[j]==3)
                    res.push_back(j);
        }
     }
  }
}
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    factor();
    sort(res.begin(),res.end());
    while(t--){
        ll n;
        cin>>n;
        cout<<res[n-1]<<endl;
    }
    return 0;
}

