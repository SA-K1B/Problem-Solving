#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
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
        string s;
        cin>>s;
        ll sz=s.size();
        ll cnt=0,o1=0,o3=0,j=0;
        while(j<sz){
            if(s[j]=='(')
                o1++;
            else if(s[j]=='[')
                o3++;
            else if(s[j]==')'){
                if(o1){
                    cnt++;
                    o1--;
                }
            }
            else{
                 if(o3){
                    cnt++;
                    o3--;
                }
            }
            j++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

