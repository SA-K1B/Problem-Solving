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
template<typename T>
using orderedMultiset = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
void solve()
{
  orderedMultiset <int>  st;
   st.insert(5);
   st.insert(1);
   st.insert(10);
   st.insert(11);
   st.insert(5);
   //cout<<st.order_of_key(11)<<endl;
   //cout<<*st.find_by_order(3)<<endl;
   // int x=st.size()-st.order_of_key(2);  // st={1,1,2,2,3,4} here x=4
  //cout<<x<<endl;
   //ll n;
 //  cin>>n;
   /*vector <ll> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }*/
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  //  freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

