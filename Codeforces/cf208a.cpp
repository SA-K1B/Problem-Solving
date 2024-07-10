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
    string s,s2="";
    cin>>s;
    int j=0;
    int sz=s.size();
    vector <string> v;
    while(j<sz){
        if(s[j]=='W'&&s[j+1]=='U'&&s[j+2]=='B'){
            if(s2.size()>0){
            v.pb(s2);
            s2="";
            }
            j+=3;
        }
        else{
            s2+=s[j];
            //cout<<s2<<endl;
            j++;
        }
    }
   if(s2.size())
    v.pb(s2);
   for(auto it:v)
    cout<<it<<' ';
    return 0;
}

