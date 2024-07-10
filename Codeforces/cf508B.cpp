#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min a-10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
   // vector <ll> v;
    cin>>s;
    ll sz=s.size();
    ll last=s[sz-1]-'0';
    ll j=0,pre=-1,f=0;
    while(j<sz){
        ll num=s[j]-'0';
        if(num%2==0){
            pre=j;
          if(num<last){
            swap(s[j],s[sz-1]);
            f=1;
            break;
          }
        }
        j++;
    }
    if(f==0&&pre==-1)
        cout<<"-1"<<endl;
    else{
       if(!f) swap(s[pre],s[sz-1]);
        cout<<s<<endl;
    }
    return 0;
}

