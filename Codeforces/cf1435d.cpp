#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"
#define Max 10000000000000000
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
    char s[10][10];
    cin>>t;
   // getchar();
    while(t--){
        char s[10][10];
        for(ll i=1;i<=9;i++){
            for(ll j=1;j<=9;j++)
                cin>>s[i][j];
        }
        for(ll i=1;i<=9;i++){
            for(ll j=1;j<=9;j++){
                if(s[i][j]=='2'){
                   s[i][j]='1';
                   break;
                }
            }
        }
        for(ll i=1;i<=9;i++){
            for(ll j=1;j<=9;j++){
              cout<<s[i][j];
            }
            cout<<endl;
        }
  }
    return 0;
}
