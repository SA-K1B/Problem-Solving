#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
struct cmp{
   bool operator()(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
   }
};
int main()
{
    //initially it wil sort by the key
    // to sort  by the value we must use comparator
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <pair<ll,ll>, cmp> st;
    st.insert({3,6});
    st.insert({5,6});
    st.insert({3,2});
    st.insert({3,7});
    st.insert({4,9});
    st.insert({8,4});
    for(auto it:st)
        cout<<it.first<<' '<<it.second<<endl;
    return 0;
}

