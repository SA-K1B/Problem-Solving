#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min a-10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
bool check(ll x){




}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<"FastestFinger"<<endl;
        }
        else if(n&1||n==2){
            cout<<"Ashishgup"<<endl;
        }
        else{
            vector <ll> fact;
            while(n%2==0){
             n/=2;
             fact.pb(2);
             }
             for(ll i=3;i*i<=n;i+=2){
                while(n%i==0){
                    n/=i;
                    fact.pb(i);
                }
             }
             if(n>1)
                fact.pb(n);
             ll n=fact.size();
             ll cnt=0;
             for(auto it:fact){
                if(it!=2)
                    break;
                else cnt++;
             }
             ll y=n-cnt;
             if(cnt==1){
                if(y==1){
                    cout<<"FastestFinger"<<endl;
                }
                else cout<<"Ashishgup"<<endl;
             }
             else{
                 if(y>0){
                    cout<<"Ashishgup"<<endl;
                }
                else cout<<"FastestFinger"<<endl;
             }
          }
        }
    return 0;
}

