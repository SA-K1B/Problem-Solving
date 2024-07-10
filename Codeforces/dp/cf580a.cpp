#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mx=1,k=1;
     for(int i=0;i<n-1;i++){
        if(a[i+1]>=a[i])
            k++;
        else {
                mx=max(k,mx);
                k=1;
        }
        if(i==n-2)
            mx=max(k,mx);
     }
     cout<<mx<<endl;
     return 0;
}
