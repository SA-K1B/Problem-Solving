#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <pair<int,int> > v;
    v.pb({1,5});
    v.pb({3,4});
     v.pb({7,5});
    v.pb({3,1});
    sort(v.begin(),v.end());
    for(auto i:v)
    cout<<i.first<<' '<<i.second<<endl;

}
