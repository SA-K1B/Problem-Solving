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
    char s1[105],s2[105];
    cin>>s1>>s2;
    strlwr(s1);
    strlwr(s2);
    int x=strcmp(s1,s2);
    //cout<<x<<endl;
    if(x<0)
        cout<<"-1"<<endl;
    else if(x>0)
        cout<<"1"<<endl;
    else cout<<"0"<<endl;
    return 0;
}

