#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],sum=0,even=0,odd=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1)
            odd=1;
        else even=1;
        sum+=a[i];
        }
        if(sum&1){
            cout<<"YES"<<endl;
            continue;
        }
        if(even==1&&odd==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
