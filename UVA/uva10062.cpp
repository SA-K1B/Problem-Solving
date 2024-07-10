#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
bool cmp(pair<int,int>x,pair<int,int>y){
  if(x.second==y.second)
    return (x.first>y.first);
  return (x.second<y.second);
}
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    int t=0;
    while(getline(cin,s1)){
            if(t>0)
            cout<<endl;
        t++;
        map <char,int> m;
        vector <pair<int,int> >v;
        int j=0;
        int sz=s1.size();
        while(j<sz){
            m[s1[j]]++;
            j++;
        }
        for(auto [f,s]: m){
            v.pb({f,s});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto [f,s]: v){
            cout<<f<<' '<<s<<endl;
        }
    }
    return 0;
}

