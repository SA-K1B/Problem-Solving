#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            int s=0;
          for(int i=0;i<n;i++)
              s+=a[i];
              if(s==m)
                cout<<"YES"<<endl;
              else cout<<"NO"<<endl;
    }
    return 0;
}
