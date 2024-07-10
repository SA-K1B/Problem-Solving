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
struct cmp{
   bool operator()(const pair<ll,ll>&a,const pair<ll,ll>&b){
   if(a.second==b.second)
       return a.first<b.first;
   else return a.second>b.second;
   }
};
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,cnt=0;
    set <pair<ll,ll>> st1;
    set <pair<ll,ll>, cmp> st2;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll s,n;
        cin>>s;
        if(s==1){
          cnt++;
          cin>>n;
         st1.insert({cnt,n});
         st2.insert({cnt,n});
        }
        else{
            /*for(auto [f,s]: st1)
               cout<<f<<' '<<s<<endl;
            cout<<endl;
            for(auto [f,s]: st2)
               cout<<f<<' '<<s<<endl;
             cout<<endl;*/
            pair<ll,ll> temp;
            if(s==2){
               temp=*st1.begin();
               cout<<temp.first<<' ';
               st1.erase(temp);
               auto it=st2.find(temp);
               st2.erase(it);
            }
            else{
                temp=*st2.begin();
               cout<<temp.first<<' ';
               st2.erase(temp);
               auto it=st1.find(temp);
               st1.erase(it);
            }
        }
    }
    return 0;
}


