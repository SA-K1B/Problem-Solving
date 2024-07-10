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
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        vector <pair<char,ll> >v1;
        vector <pair<char,ll> >v2;
        //cout<<s<<' '<<t<<endl;
        ll sz1=s.size();
        ll sz2=t.size();
        ll j=0,i=0,f=0;
        while(j<sz1){
        if(v1.empty()||v1.back().first!=s[j]){
        v1.pb({s[j],1});
        }
        else{
            v1.back().second++;
        }
        j++;
    }
     j=0;
     while(j<sz2){
        if(v2.empty()||v2.back().first!=t[j]){
        v2.pb({t[j],1});
        }
        else{
            v2.back().second++;
        }
        j++;
    }
    if(v1.size()!=v2.size()){
        cout<<"NO"<<endl;
        continue;
    }
   for(ll i=0;i<v1.size();i++){
    if((v1[i].first!=v2[i].first)||(v1[i].second>v2[i].second)){
        f=1;
        break;
      }
   }
        if(f)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

