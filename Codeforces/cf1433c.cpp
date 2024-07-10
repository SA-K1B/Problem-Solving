#include<bits/stdc++.h>
using namespace std;
int n,a[300005],b[300005];
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int ans=-1,mx=b[n-1];
    for(int i=0;i<n-1;i++){

     if(a[i]==mx&&a[i+1]!=mx){
         ans=i+1;
         break;
     }
    else if(a[i]!=mx&&a[i+1]==mx){
            ans=i+2;
            break;
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}
