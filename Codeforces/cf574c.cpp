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
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a[200005];
    set <ll> st;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];


   //sort(a,a+n);
    //cout<<l<<endl;
    ll f=0;
     for(ll i=0;i<n;i++){
    ll x=a[i];
    //cout<<x<<endl;
    while(x%2==0){
        x/=2;
    }
    while(x%3==0){
        x/=3;
      }
      //cout<<x<<endl;
      st.insert(x);
    }
    for(ll i=0;i<n;i++){

    }
    if(st.size()==1)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

