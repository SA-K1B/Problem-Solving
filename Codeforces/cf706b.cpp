#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int x,n;
    vector <int> v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int q,y;
    vector<int> qu;
    cin>>q;
    for(int j=1;j<=q;j++){
        cin>>y;
        qu.push_back(y);
    }
     for(int j=0;j<q;j++){
         int pos=upper_bound(v.begin(),v.end(),qu[j])-v.begin();
         cout<<pos<<endl;
     }
     return 0;
}
