#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void solve()
{
  ll n,q;
   cin>>n>>q;
   vector <ll> rw(n+2,0),cl(n+2,0);
   ordered_set rs;
   ordered_set cs;
   while(q--){
    ll ch;
    cin>>ch;
    if(ch==1){
        ll r,c;
        cin>>r>>c;
        rw[r]++;
        cl[c]++;
        rs.insert(r);
        cs.insert(c);
    }
    else if(ch==2){
        ll r,c;
        cin>>r>>c;
        rw[r]--;
        cl[c]--;
        if(rw[r]==0)
        rs.erase(r);
        if(cl[c]==0)
        cs.erase(c);
    }
    else{
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        ll f=0;
        if(rs.find(x1)!=rs.end()&&rs.find(x2)!=rs.end()){
            ll x3=rs.order_of_key(x1);
            ll x4=rs.order_of_key(x2);
            if(x4-x3==x2-x1)
                f=1;
        }
        if(cs.find(y1)!=cs.end()&&cs.find(y2)!=cs.end()){
            ll y3=cs.order_of_key(y1);
            ll y4=cs.order_of_key(y2);
            if(y4-y3==y2-y1)
                f=1;
        }
        if(f)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

