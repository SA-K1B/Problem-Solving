#include<bits/stdc++.h>]
using namespace std;
map <char,int> mp;
map <char,int>:: iterator it;
int main()
{
    //freopen("i.txt","r",stdin);
    string s1;
    int t,s;
    cin>>t;
    while(t--){
    int n,sum=0;
    cin>>n;
    int y=n;
    while(y--){
        cin>>s1;
        s=s1.size();
        sum+=s;
        int j=0;
        while(j<s){
            mp[s1[j]]++;
            j++;
        }
    }
    if(sum%n!=0){
        cout<<"NO"<<endl;
        mp.clear();
        continue;
    }
    int f=0;
    for(it=mp.begin();it!=mp.end();it++){
            //cout<<it->second<<endl;
            int x=it->second;
        if(x%n!=0){
            //cout<<it->second<<endl;
            f=1;
            break;
        }
    }
    if(f)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    mp.clear();
  }
  return 0;
}
