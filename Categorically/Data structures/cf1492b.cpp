#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
  int n;
   cin>>n;
   set<int> st;
   vector <int> a(n+5);
   for(int i=0;i<n;i++){
    cin>>a[i];
    st.insert(a[i]);
   }
   int j=n-1;
   vi v,r;
   while(!st.empty()){
    auto it=--st.end();
    int mx=*it;
    //cout<<mx<<endl;
     while(j>=0){
        if(a[j]==mx){
          v.pb(a[j]);
          rv(v);
          for(auto it1: v){
            r.pb(it1);
          }
          v.clear();
          st.erase(it);
          j--;
          break;
        }
        else{
            v.pb(a[j]);
            st.erase(st.find(a[j]));
            j--;
        }
     }
   }
   for(auto it: r)
    cout<<it<<' ';
   cout<<endl;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

