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
    ll n;
    cin>>n;
    ll r=1;
    while(r*5<n){
       n-=r*5;
       r*=2;
    }
    string ch[6]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    float x=ceil((float)n/r);
    int y=x;
    //cout<<x<<endl;
    cout<<ch[y-1]<<endl;
    return 0;
}

