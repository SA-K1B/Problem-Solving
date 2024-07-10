#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        map <int,int> mp;
        int n,a[1005];
        cin>>n;
        int f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(mp[a[i]]==1){
             f=1;
            }
            mp[a[i]]=1;
        }
      if(f==1)
        cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
