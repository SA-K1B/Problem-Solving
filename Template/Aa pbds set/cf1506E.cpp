#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define Max 1000000000
#define Min -1000000000
#define fr(i,n,j) for(i=j;i<n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void solve()
{
  ordered_set st;
  set <int> st1;
   //cout<<st.order_of_key(10)<<endl; //index of 10
   //cout<<*st.find_by_order(2)<<endl;  //val at index 2
   int n;
   cin>>n;
   vector <int> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=1;i<=n;i++){
    st1.insert(i);
    st.insert(i);
   }
   vi v1,v2;
   v1.pb(a[0]);
   v2.pb(a[0]);
   st.erase(a[0]);
   st1.erase(a[0]);
   int pre=a[0];
   for(ll i=1;i<n;i++){
    if(pre==a[i]){
       int f=*st1.begin();
       st1.erase(f);
       v1.pb(f);
       int pos=st.order_of_key(a[i]);
       pos--;
       int val=*st.find_by_order(pos);
       v2.pb(val);
       st.erase(val);
    }
    else {
            v1.pb(a[i]);
            v2.pb(a[i]);
            st.erase(a[i]);
            st1.erase(a[i]);
            pre=a[i];
     }
   }
   for(auto it: v1)
    cout<<it<<' ';
   cout<<endl;
   for(auto it: v2)
    cout<<it<<' ';
   cout<<endl;
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
