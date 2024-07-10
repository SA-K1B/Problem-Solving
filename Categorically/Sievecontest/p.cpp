#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int main()
{
 //   freopen("i.txt","r",stdin);
  //  freopen("o.txt","w",stdout);
   // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        vector <ll> res;
        ll n;
        cin>>n;
        if(n==1){
            cout<<n<<endl;
            continue;
        }
        for(ll j=9;j>=2;j--){
            while(n%j==0){
                    //cout<<n<<' '<<j<<endl;
                n/=j;
                res.pb(j);
             //   cout<<n<<' '<<endl;
            }
        }
        if(n>7)
            cout<<"-1"<<endl;
        else{
            sort(res.begin(),res.end());
            for(ll j=0;j<res.size();j++)
                cout<<res[j];
                printf("\n");
        }
    }
    return 0;
}
