#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n&1){
           cout<<a[n/2]<<' ';
            for(i=(n/2)-1,j=(n/2)+1;i>=0,j<n;i--,j++)
                cout<<a[i]<<' '<<a[j]<<' ';

        }
        else{
            for(i=(n/2)-1,j=n/2;i>=0,j<n;i--,j++)
               cout<<a[i]<<' '<<a[j]<<' ';
        }
        cout<<"\n";
    }
    return 0;
}
