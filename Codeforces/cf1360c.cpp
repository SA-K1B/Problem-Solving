#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,a[55],o=0,e=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2)
                o++;
            else e++;
        }
        sort(a,a+n);
        if(o%2){
                int f=0;
            for(int i=1;i<n;i++){
                int d=a[i]-a[i-1];
                if(d==1){
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }
            }
        if(f==0)
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
