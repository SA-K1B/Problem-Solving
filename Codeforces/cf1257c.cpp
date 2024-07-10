#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,a[200005];
        map <int,int> mp;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
            int x,d,mn=INF;
        for(int i=1;i<=n;i++){
            if(mp[a[i]]!=0){
                 x=i;
                 d=x-mp[a[i]]+1;
                 mn=min(d,mn);
            }
            mp[a[i]]=i;
        }
        if(mn==INF)
            cout<<"-1"<<endl;
        else
            cout<<mn<<endl;
    }
    return 0;
}
