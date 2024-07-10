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
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    if((a==1&&b==1&&c==1)||(a==1&&c==1)){
        cout<<a+b+c<<endl;
    }
    else if(a==1&&b!=1&&c!=1){
        cout<<(a+b)*c<<endl;
    }
     else if(a!=1&&b==1&&c!=1){
        cout<<(b+min(a,c))*max(a,c)<<endl;
    }
     else if(a!=1&&b!=1&&c==1){
        cout<<a*(b+c)<<endl;
    }
     else if(a==1&&b==1){
        cout<<(a+b)*c<<endl;
    }
    else if(b==1&&c==1){
        cout<<(a*(b+c))<<endl;
    }
    else cout<<a*b*c<<endl;
    return 0;
}

