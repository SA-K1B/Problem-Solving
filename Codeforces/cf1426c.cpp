#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        double sq=sqrt(n);
        sq*=2;
        int ans=sq-1;
        cout<<ans<<endl;
    }
    return 0;
}
