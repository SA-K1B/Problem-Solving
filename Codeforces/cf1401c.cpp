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
        int a[n],b[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        }
        int f=0;
        sort(b,b+n);
        int low=b[0];
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]&&(__gcd(a[i],low)!=low||__gcd(b[i],low)!=low)){
                //cout<<i<<endl;
                f=1;
                break;
            }
        }
        if(f)
          cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
