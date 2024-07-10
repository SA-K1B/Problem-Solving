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
        ll x0,x2,x1,y0,y1,y2,sum=0;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;
        ll mn=min(x2,y1);
        x2-=mn;
        y1-=mn;
        sum+=2*mn;
        mn=min(x0,y2);
        x0-=mn;
        y2-=mn;
        mn=min(x1,y0);
        x1-=mn;
        y0-=mn;
        mn=min(x1,y1);
        x1-=mn;
        y1-=mn;
        mn=min(x2,y2);
        x2-=mn;
        y2-=mn;
        mn=min(x1,y2);
        sum-=2*mn;
        cout<<sum<<endl;
    }
    return 0;
}

