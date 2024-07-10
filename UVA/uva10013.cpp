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
   // freopen("i.txt","r",stdin);
 //  freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
  //  scanf("\n");
    ll c=0;
    while(t--){
          if(c>0)
          cout<<endl;
         c=1;
        ll m;
        cin>>m;
        vector<pair<ll,ll> > v;
        while(m--){
            ll x,y;
            cin>>x>>y;
            v.pb({x,y});
        }
        vector <ll> res;
        reverse(v.begin(),v.end());
        ll rem=0;
        for(auto [f,s]:v){
            ll sum=f+s+rem;
        //    cout<<sum<<endl;
            if(sum>=10){
                ll last=sum%10;
                res.pb(last);
                sum/=10;
                rem=sum%10;
            }
            else{
               ll last=sum%10;
                res.pb(last);
                rem=0;
            }
        }
        if(rem>0)
            res.pb(rem);
            reverse(res.begin(),res.end());
            int f=0;
        for(auto it:res){
          if(it>0)
            f=1;
           if(f) cout<<it;
        }
        cout<<endl;
    }
    return 0;
}

