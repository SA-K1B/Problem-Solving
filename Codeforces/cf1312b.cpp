#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n,a[105];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
        cout"\n";
    }
    return 0;
}
