#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
        for(int i=n;i>=1;i--){
            cout<<i<<' ';
        }
        cout<<"\n";
    }
    else{
        int mid=n/2+1;
        for(int i=n;i>mid;i--){
            cout<<i<<' ';
        }
        for(int i=1;i<=mid;i++){
            cout<<i<<' ';
        }
        cout<<"\n";
    }
 }
     return 0;
}
