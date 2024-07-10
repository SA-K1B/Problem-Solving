#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
template<typename T>
using ordered_Multiset = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
void solve()
{
  ordered_Multiset <ll> st;
   ll n;
   cin>>n;
   vector <ll> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   ll ans=0;
   for(ll i=0;i<n;i++){
    if(st.empty())
        st.insert(a[i]);
    else{
        ll grt=st.size()-st.order_of_key(a[i]);
        ans+=grt;
        st.insert(a[i]);
    }
   }
   cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

