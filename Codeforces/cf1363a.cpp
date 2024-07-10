#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,x,a[1005],o=0,e=0;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2)
                o++;
            else e++;
        }
        if(!o)
            cout<<"NO"<<endl;
        else{
            if(n==x){
                if(o%2)
                    cout<<"YES"<<endl;
                 else cout<<"NO"<<endl;
            }
            else{
                if(!e){
                    if(x%2)
                        cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
