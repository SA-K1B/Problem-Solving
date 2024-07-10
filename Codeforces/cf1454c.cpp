#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int main()
{
 //   freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int f=0,n,a[200010],cnt[200010];
      //  vector <int> ans;
        cin>>n;
        memset(cnt,0,200010);
        //cout<<cnt[2]<<endl;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            cnt[a[i]]++;
            if(i!=1){
            if(a[i]!=a[i-1]){
                f=1;
              }
              else  cnt[a[i]]--;
            }
        }
        if(f==0){
            cout<<"0"<<endl;
            continue;
        }
        cnt[a[1]]--;
        cnt[a[n]]--;
        int mn=INF;
         for(int i=1;i<=n;i++){
          //  cout<<a[i]<<' '<<cnt[a[i]]<<endl;
            if(cnt[a[i]]<mn){
                mn=cnt[a[i]];
            }
         }
       cout<<mn+1<<endl;
    }
    return 0;
}
