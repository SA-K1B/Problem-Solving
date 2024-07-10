#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t,a[505],b[505];
    cin>>t;
    while(t--){
        int x,y,n,f1=0,f2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(f1==0){
            if(i==0)
                 x=a[i];
            else{
                if(x>a[i])
                    f1=1;
                else x=a[i];
            }
        }
    }

        for(int i=0;i<n;i++){
            cin>>b[i];
            if(f2==0){
            if(i==0)
                y=b[i];
            else{
                if(y!=b[i])
                    f2=1;
            }
        }
    }
     if(f1==0){
        cout<<"YES"<<endl;
    }
    else{
        if(f2==0)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
  }
  return 0;
}
