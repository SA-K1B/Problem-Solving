#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
        if(n==1){
            cout<<"4"<<endl;
        }
        else if(n&1){
            ll x=n/2;
            cout<<(x+2)*(x+1)*2<<endl;
        }
        else{
            ll x=n/2;
            cout<<(x+1)*(x+1)<<endl;
        }
    return 0;
}
