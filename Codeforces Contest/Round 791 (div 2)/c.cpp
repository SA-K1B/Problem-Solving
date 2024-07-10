#include <ext/pb_ds/assoc_container.hpp> //Required for PBDS
#include <ext/pb_ds/tree_policy.hpp> //Required for PBDS
#include<bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0)
using namespace __gnu_pbds; //Required for PBDS
using namespace std;
using ll = long long;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//Declaring PBDS Set variable
//type is declared in the tree update 'int' with required type
//All operations are of: O(log n)
void solve()
{
  ll n,q;
   std::cin>>n>>q;
   ordered_set rs;
   ordered_set cs;
   while(q--){
    ll ch;
    std::cin>>ch;
    if(ch==1){
        ll r,c;
        std::cin>>r>>c;
        rs.insert(r);
        cs.insert(c);
    }
    else if(ch==2){
        ll r,c;
        std::cin>>r>>c;
        rs.erase(r);
        cs.erase(c);
    }
    else{
        ll x1,x2,y1,y2;
        std::cin>>x1>>y1>>x2>>y2;
        //std::cout<<"f";
          auto it1=rs.find(x1);
          auto it2=rs.find(x2);
          if(it1!=rs.end()&&it2!=rs.end()){
          ll x3=rs.order_of_key(x1);
          ll x4=rs.order_of_key(x2);
           if(x4-x3>=x2-x1){
            std::cout<<"Yes"<<"\n";
            continue;
           }
          }
          auto it3=cs.find(y1);
          auto it4=cs.find(y2);
          if(it3!=cs.end()&&it4!=cs.end()){
         // std::cout<<y1<<' '<<y2<<"\n";
          ll y3=cs.order_of_key(y1);
          ll y4=cs.order_of_key(y2);
            if(y4-y3>=y2-y1){
            std::cout<<"Yes"<<"\n";
           }
           else{
            std::cout<<"No"<<"\n";
           }
          }
          else{
            std::cout<<"No"<<"\n";
          }
    }
   }
}
int main()
{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
  //  cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

