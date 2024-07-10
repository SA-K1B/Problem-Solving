#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                f=1;
                break;
            }
         }
         if(f==1)
            cout<<"1"<<endl;
         else cout<<n<<endl;
    }
    return 0;
}
