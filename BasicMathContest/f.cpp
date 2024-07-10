#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t,n,d;
    cin>>t;
    while(t--){
    cin>>n>>d;
    if(d<=n){
        cout<<"YES"<<endl;
        continue;
    }
    int mnm=INF;
    int sq=sqrt(d);
      //  cout<<sq<<endl;
    for(int i=1;i<=sq;i++){
    double res=(d/(i+1.0))+i;
    double mn=ceil(res);
    int mn2=(int)mn;
    mnm=min(mn2,mnm);
    }
    //cout<<mn2<<endl;
    if(mnm<=n){
         cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}
