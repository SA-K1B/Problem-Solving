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
        ll n;
        string s1;
        cin>>n>>s1;
        reverse(s1.begin(),s1.end());
        ll j=0;
        while(j<n){
            if(s1[j]!=')')
                break;
            j++;
        }
        if(j!=n){
        ll x=n-(j);
        //cout<<n<<' '<<x<<endl;
        if(x>=(n-x))
            cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        }
        else cout<<"Yes"<<endl;
    }

    return 0;
}

