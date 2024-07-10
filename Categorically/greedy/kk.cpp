#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> mp;
    mp[4]=4;
    mp[5]=5;
    int x=0;
    for(auto it: mp){
        mp[it.first]=1;
    }
    for(auto it: mp){
        cout<<it.second;
    }
}
