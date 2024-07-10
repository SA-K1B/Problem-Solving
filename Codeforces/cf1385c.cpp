#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int i,n,a[200005];
        cin>>n;
        for( i=0;i<n;i++)
            cin>>a[i];
        reverse(a,a+n);
        int f=0;
        for( i=1;i<n;i++){
            if(f==0){
            if(a[i]<a[i-1])
                f=1;
            }
            if(f==1){
                if(a[i]>a[i-1]){
                    break;
                }
            }
        }
        cout<<n-i<<endl;
    }
    return 0;
}
