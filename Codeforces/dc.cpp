#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    ll t;
    string s1;
    map <string,int> mp;
    cin>>t;
    while(t--){
        cin>>s1;
        if(mp[s1]==0){
            cout<<"OK"<<endl;
            mp[s1]++;
        }
        else{
            int ap=mp[s1];
            cout<<s1<<ap<<endl;
            mp[s1]++;
        }
    }
    return 0;
}
