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
    ll t;
    cin>>t;
    while(t--){
        ll n,sum=0,a[105];
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        vector <ll> b;
        bool is[105];
        for(ll i=0;i<n;i++){
            cin>>is[i];
            if(is[i]==0){
                b.pb(a[i]);
            }
        }
         if(sum<0||b.size()==0){
           for(ll i=0;i<n;i++){
            cout<<a[i]<<' ';
          }
          cout<<endl;
          continue;
        }
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
                ll j=0;
              for(ll i=0;i<n;i++){
                  if(is[i])
                   cout<<a[i]<<' ';
                 else{
                    cout<<b[j]<<' ';
                    j++;
                 }
            }
        cout<<endl;
    }
    return 0;
}


