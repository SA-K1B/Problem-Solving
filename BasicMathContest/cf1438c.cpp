#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    ll t;
    ll n,m,a[105][105];
    cin>>t;
    while(t--){
    //ll n,m,n,a[105][105];
    cin>>n>>m;
    //cout<<n<<' '<<m<<endl;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++)
            cin>>a[i][j];
    }
     for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
                if(((i%2)&&(j%2==0))||(i%2==0&&j%2!=0)){
                 if(a[i][j]%2==0)
                     a[i][j]+=1;
                }
                else{
                     if(a[i][j]%2)
                        a[i][j]+=1;
                }
           }
       }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++)
             cout<<a[i][j]<<' ';
              cout<<"\n";
      }
   }
   return 0;
}
