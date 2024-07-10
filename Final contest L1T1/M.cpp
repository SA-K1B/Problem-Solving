#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    if(n>=m){
        int ans=n+(m-1);
        cout<<ans<<endl;
        int j=1;
        for(int i=1;i<=n;i++){
            cout<<i<<' '<<j<<endl;
        }
        j++;
        while(j<=m){
            cout<<"1"<<' '<<j<<endl;
            j++;
        }
    }
     else if(n<m){
        int ans=m+(n-1);
        cout<<ans<<endl;
        int j=1;
        for(int i=1;i<=m;i++){
            cout<<j<<' '<<i<<endl;
        }
        j++;
        while(j<=n){
            cout<<j<<' '<<"1"<<endl;
            j++;
        }
    }
    return 0;
}
