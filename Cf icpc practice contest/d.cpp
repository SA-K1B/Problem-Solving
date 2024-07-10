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
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll tt,pos,n,m,a,b;
        vector <ll> s;
      //  vector <ll>:: iterator it;
        cin>>n>>m>>a>>b;
        for(ll i=0;i<m;i++){
            ll g;
            cin>>g;
            s.pb(g);
        }
        sort(s.begin(),s.end());
        if(a<b){
            tt=(a-1)+(b-a);
            pos=b-a-1;
        }
        else{
            tt=(n-a)+(a-b);
            pos=a-b-1;
        }
        ll cnt=1;
        //cout<<tt<<' '<<pos<<endl;
      //  for(auto h: s)
         //  cout<<h<<' ';
       auto it=lower_bound(s.begin(),s.end(),tt)-s.begin();
       // cout<<*it<<endl;
        it--;
        for(ll i=it;i>=0;i--){
           if(s[i]+cnt<=tt)
            cnt++;
        }
      cout<<min(pos,cnt-1)<<endl;
    }
    return 0;
}
