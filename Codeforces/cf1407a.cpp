#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,a[1005],o=0,e=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i])
                    o++;
            else
                    e++;
        }
        if(o<=n/2){
                cout<<n-o<<endl;
            for(int i=1;i<=n-o;i++)
                cout<<"0"<<' ';
               cout<<"\n";
        }
        else{
            if(o%2==0){
                cout<<o<<endl;
               for(int i=1;i<=o;i++)
                cout<<"1"<<' ';
               cout<<"\n";
        }
        else{
            o--;
             cout<<o<<endl;
              for(int i=1;i<=o;i++)
                cout<<"1"<<' ';
               cout<<"\n";
        }
     }
  }
    return 0;
}
