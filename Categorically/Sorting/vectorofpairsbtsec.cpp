#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int> > v;
bool srt(pair<int,int> x,pair<int,int> y){
    return (x.second<y.second);
}
int main()
{
    v.push_back({3,5});
    v.push_back({1,3});
    v.push_back({8,2});
    v.push_back({1,5});
    sort(v.begin(),v.end(),srt);
    cout<<v[0].first;
}
