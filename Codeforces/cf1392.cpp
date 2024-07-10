#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        int b[n],a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
            sort(a,a+n);
            int mx=a[n-1];
            for(int i=0;i<n;i++){
                 b[i]=mx-b[i];
                 a[i]=mx-a[i];
            }
            if(k&1){
                for(int i=0;i<n;i++)
                    cout<<b[i]<<' ';
            }
            else{
                sort(a,a+n);
                mx=a[n-1];
                for(int i=0;i<n;i++)
                cout<<mx-b[i]<<' ';
            }
            cout<<"\n";
        }
        return 0;

    }
