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
        ll x,n,a[100005];
        cin>>n;
        ll sum=0,txor=0;
        for(ll i=0;i<n;i++){
            cin>>x;
            sum+=x;
            txor^=x;
        }
       if(sum==(2*txor)){
        cout<<"0"<<endl<<endl;;
       }
       else{
        cout<<"2"<<endl;
        cout<<txor<<' '<<sum+txor<<endl;
       }
    }
    return 0;
}


