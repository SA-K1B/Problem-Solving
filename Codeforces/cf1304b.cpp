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
    ll n,m;
    cin>>n>>m;
    map <string,int> mp;
    vector <string> v;
    ll sum=0;
    while(n--){
        string s1;
        cin>>s1;
        v.pb(s1);
    }
    string s2;
    vector <string> res;
    vector <string>:: iterator itt;
    for(auto f: v){
        s2=f;
        int c=mp[s2];
        if(c%2==0){
            reverse(s2.begin(),s2.end());
            mp[s2]++;
        }
       else{
          sum+=2*m;
          res.pb(s2);
          mp[s2]++;
       }
    }
    int fl=0;
    string s3;
    for(auto [f,s]:mp){
        if(s%2!=0){
            s3=f;
            reverse(s3.begin(),s3.end());
            if(f==s3){
                sum+=m;
                fl=1;
                break;
            }
        }
    }
    cout<<sum<<endl;
    for(auto f: res)
        cout<<f;
    if(fl)
        cout<<s3;
    reverse(res.begin(),res.end());
     for(auto f: res){
        string s4=f;
        reverse(s4.begin(),s4.end());
        cout<<s4;
     }
    return 0;
}
