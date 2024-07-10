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
        string s1;
        cin>>s1;
        ll sz=s1.size();
        ll res=0;
        for(ll i=0;;i++){
            ll cur=i;
            bool ok=1;
            ll j=0;
            while(j<sz){
                res+=1;
                if(s1[j]=='+')
                    cur++;
                else cur--;
                if(cur<0){
                    ok=0;
                    break;
                }
                j++;
            }
            if(ok)
                break;
        }
        cout<<res<<endl;
    }
    return 0;
}

