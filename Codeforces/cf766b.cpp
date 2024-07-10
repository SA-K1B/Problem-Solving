#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int n,a[100005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<=n-3;i++){
        if(a[i]+a[i+1]>a[i+2]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
     cout<<"NO"<<endl;
     return 0;
}
