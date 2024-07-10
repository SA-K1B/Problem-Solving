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
    map<string,int> m;
    while(n--){
    string s;
    cin>>s;
    m[s]++;
    }
    string won;
    int ans=-1;
    for(auto [f,s]: m){
        if(s>ans){
            won=f;
            ans=s;
        }
    }
    cout<<won<<endl;
    return 0;
}

