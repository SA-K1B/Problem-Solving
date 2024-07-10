#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,b[200005],a[200005],cnt[200005];
      //  vector <int> ans;
        cin>>n;
        memset(cnt,0,sizeof(cnt));
       // cout<<cnt[2]<<endl;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        //sort(a+1,a+n+1);
        int mn=INF,mni;
        for(int i=1;i<=n;i++){
            if(cnt[a[i]]==1){
                 //   cout<<a[i]<<endl;
                if(a[i]<mn){
                mn=a[i];
                mni=i;
                }
            }
        }
        if(mn==INF)
            cout<<"-1"<<endl;
        else cout<<mni<<endl;
    }
    return 0;
}
