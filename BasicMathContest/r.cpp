#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int x,long long int y){
     long long int ans=1;
     long long int s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
        //cout<<a<<endl;
    }
    return ans;
}
int main()
{
    freopen("i.txt","r",stdin);
    long long int t,cnt=0;
    cin>>t;
    while(t--){
        printf("Case %d: ",++cnt);
       long long int n,k;
        cin>>n>>k;
        if((n-k)<k){
            cout<<fun(n,n-k)<<endl;
        }
        else{
            cout<<fun(n,k)<<endl;
        }
    }
    return 0;
}
