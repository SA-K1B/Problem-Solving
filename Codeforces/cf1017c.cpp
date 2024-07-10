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
ll n;
void print(ll p1){
    ll mx=n;
    ll mn=n-p1+1;
    while(mn>0){
    for(ll i=mn;i<=mx;i++){
        cout<<i<<' ';
     }
     mx-=p1;
     mn-=p1;
  }
  for(ll i=1;i<=mx;i++)
    cout<<i<<' ';
    cout<<"\n";
    return;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ll sq=sqrt(n);
        print(sq);
    return 0;
}

