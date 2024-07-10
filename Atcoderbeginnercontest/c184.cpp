#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
bool check(ll r1,ll c1,ll r2,ll c2){
     for(ll i=-2;i<=2;i++){
        for(ll j=-2;j<=2;j++){
            ll x=r2+i;
            ll y=c2+j;
            if(((r1+c1)==(x+y))||((r1-c1)==(x-y))||(abs(r1-x)+abs(c1-y)<=3)){
                return true;
            }
        }
     }
     return false;
}
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2&&c1==c2){
        cout<<"0"<<endl;
    }
   else if(((r1+c1)==(r2+c2))||((r1-c1)==(r2-c2))||(abs(r1-r2)+abs(c1-c2)<=3)){
        cout<<"1"<<endl;
    }
    else if(check(r1,c1,r2,c2)){
           cout<<"2"<<endl;
        }
    else if(((r1+c1)%2)==((r2+c2)%2))
            cout<<"2"<<endl;
    else cout<<"3"<<endl;
    return 0;
}

