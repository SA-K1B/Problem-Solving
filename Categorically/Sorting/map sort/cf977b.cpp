#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
bool cmp(pair<string,int> p1,pair<string,int> p2){
    if(p1.second>p2.second)
        return true;
    else return false;
}
int main()
{
    freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    string s1,s2="";
    cin>>s1;
    map<string,int> mp;
    int p=0;
    while(p<n-1){
        s2+=s1[p];
        s2+=s1[p+1];
        mp[s2]++;
        s2.clear();
        p++;
    }
    vector<pair<string,int> >v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),cmp);
    //for(int i=0;i<v.size();i++)
    cout<<v[0].first<<endl;
    return 0;
}
