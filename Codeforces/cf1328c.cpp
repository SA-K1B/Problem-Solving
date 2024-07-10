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
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,f=0;
        cin>>n;
        string s1,a="",b="";
        cin>>s1;
        ll sz=s1.size();
        ll j=0;
        while(j<sz){
                if(f==0){
            if(s1[j]=='2'){
                a+='1';
                b+='1';
            }
            else if(s1[j]=='0'){
                a+='0';
                b+='0';
            }
            else{
                a+='1';
                b+='0';
                f=1;
            }
        }
        else{
          if(s1[j]=='2'){
                a+='0';
                b+='2';
            }
            else if(s1[j]=='0'){
                a+='0';
                b+='0';
            }
            else{
                a+='0';
                b+='1';
                f=1;
            }
        }
            j++;
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}

