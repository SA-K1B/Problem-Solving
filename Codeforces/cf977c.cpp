#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int k,n,a[200005];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
   // cout<<a[0]<<endl;
    //for(int i=1;i<=n;i++)
        //cout<<a[i]<<' ';
    if(k==n){
        cout<<a[n]<<endl;
    }
    else if(k==0){
        if(a[1]==1)
        cout<<"-1"<<endl;
        else cout<<"1"<<endl;
    }
    else{
        int r=k;
        if(a[r]==a[r+1])
            cout<<"-1"<<endl;
        else
            cout<<a[r]<<endl;
    }
   return 0;

}

