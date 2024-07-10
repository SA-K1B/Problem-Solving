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
        ll n,k;
        cin>>n>>k;
        if(n==k){
            cout<<"0"<<endl;
        }
        else if(n>k){
            if((n%2)==(k%2))
                cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        else{
            cout<<k-n<<endl;
        }
    }
    return 0;
}

