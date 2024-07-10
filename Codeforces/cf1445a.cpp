#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        int f=0;
        for(int i=0;i<n;i++){
            if(a[i]+b[i]>x){
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

