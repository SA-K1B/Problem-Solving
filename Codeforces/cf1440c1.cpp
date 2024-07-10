#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    ll px,py,m,t,i,j,n;
    char a[105][105];
    cin>>t;
    while(t--){
    ll cnt=0;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='1')
                cnt++;
        }
    }
    cout<<cnt<<endl;
     for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++) {
         if(a[i][j]=='1'){
              px=i;
              py=j;
              if(px!=n&&py!=m){
                cout<<i<<' '<<j<<' ';
                cout<<i<<' '<<j+1<<' ';
                cout<<i+1<<' '<<j+1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i+1<<' '<<j<<' ';
                cout<<i+1<<' '<<j+1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i+1<<' '<<j<<' ';
                cout<<i<<' '<<j+1<<' '<<endl;
              }
              else if(px!=n&&py==m){
                cout<<i<<' '<<j<<' ';
                cout<<i<<' '<<j-1<<' ';
                cout<<i+1<<' '<<j-1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i+1<<' '<<j<<' ';
                cout<<i+1<<' '<<j-1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i+1<<' '<<j<<' ';
                cout<<i<<' '<<j-1<<' '<<endl;
              }
              else if(px==n&&py==m){
                cout<<i<<' '<<j<<' ';
                cout<<i<<' '<<j-1<<' ';
                cout<<i-1<<' '<<j-1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i-1<<' '<<j<<' ';
                cout<<i-1<<' '<<j-1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i-1<<' '<<j<<' ';
                cout<<i<<' '<<j-1<<' '<<endl;
              }
              else{
                cout<<i<<' '<<j<<' ';
                cout<<i<<' '<<j-1<<' ';
                cout<<i-1<<' '<<j+1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i-1<<' '<<j<<' ';
                cout<<i-1<<' '<<j+1<<' '<<endl;
                cout<<i<<' '<<j<<' ';
                cout<<i-1<<' '<<j<<' ';
                cout<<i<<' '<<j+1<<' '<<endl;
              }
            }
         }
        }
     }
     return 0;
  }
