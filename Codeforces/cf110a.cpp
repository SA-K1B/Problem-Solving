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
    ll n,c=0;
    cin>>n;
    while(n>0){
        ll rem=n%10;
        if(rem==4||rem==7)
            c++;
        n/=10;
    }
    if(c==0){
        cout<<"NO"<<endl;
        return 0;
    }
    int f=0;
    while(c>0){
        ll rem=c%10;
        if(rem!=4&&rem!=7){
            f=1;
            break;
        }
        c/=10;
    }
       if(f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}

