#include<bits/stdc++.h>
using namespace std;
int  main()
{
    freopen("i.txt","r",stdin);
    int t,a[4],b[4];
    cin>>t;
    while(t--){
      for(int i=0;i<3;i++){
        cin>>a[i];
       }
        for(int i=0;i<3;i++){
        cin>>b[i];
       }
       int sum=0;
       if(b[1]>=a[2]){
        sum+=(2*a[2]);
        a[2]=0;
        b[1]-=a[2];
       }
       else{
        sum+=(2*b[1]);
        a[2]-=b[1];
        b[1]=0;
       }
       if(a[0]+a[2]>=b[2]){
        cout<<sum<<endl;
        continue;
       }
       else{
         b[2]-=(a[0]+a[2]);
         a[0]=0;
         a[2]=0;
       }
       if(b[0]+b[1]>=a[1]){
         cout<<sum<<endl;
          continue;
       }
       else{
        a[1]-=(b[0]+b[1]);
        b[0]=0;
        b[1]=0;
    }
    sum+=(-2*a[1]);
    cout<<sum<<endl;
  }
  return 0;
}
