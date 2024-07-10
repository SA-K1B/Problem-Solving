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
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin>>q;
    while(q--){
        ll c,m,x;
        cin>>c>>m>>x;
        ll mn=min(c,m);
        if(x>=mn){
            cout<<mn<<endl;
        }
        else{
           ll rem=mn-x;
           ll y=max(c,m)-mn;
           if(y>=rem)
              cout<<mn<<endl;
           else{
            c-=x;
            m-=x;
            ll k=(c+m)/3;
            cout<<x+min(mn,k)<<endl;
           }
        }
    }
    return 0;
}

