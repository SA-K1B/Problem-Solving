#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector <pair<int,int> > v[100];
  v[1].push_back({3,6});
  v[1].push_back({3,5});
  for(int i=0;i<v[1].size();i++)
    cout<<v[1][i].first<<' '<<v[1][i].second<<endl;

}
