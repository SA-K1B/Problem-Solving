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
        ll x,p=9,f=0;
        cin>>x;
        string s1="";
        while(x>0){
            if(p==0){
                //cout<<"d"<<endl;
                f=1;
                break;
            }
            if(x>p){
                s1+='0'+p;
                x-=p;
                p--;
            }
            else{
                s1+='0'+x;
                break;
            }
        }
        if(f){
            cout<<"-1"<<endl;
            continue;
        }
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl;
    }
    return 0;
}

