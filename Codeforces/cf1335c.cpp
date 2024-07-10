#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
   int t,a[200005];
   cin>>t;
   while(t--){
    map <int,int> mp;
    int n;
    cin>>n;
     int mx=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]>mx)
            mx=mp[a[i]];
    }
    int distinct=mp.size();
    if(mx>distinct)
        cout<<distinct<<endl;
    else if(mx==distinct){
            cout<<mx-1<<endl;;
    }
    else{
        cout<<mx<<endl;
    }
  }
  return 0;
}
