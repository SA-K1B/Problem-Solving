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
   string s;
   cin>>s;
  // cout<<s<<endl;
   ll y,j=0;
   ll sz=s.size();
   while(j<sz){
        ll x=s[j]-'0';
        //cout<<s[j]<<endl;
    if(j==0){
        if(x!=9){
            if(x>=5){
            y=9-x;
            s[j]=y+'0';
          }
        }
       //  cout<<s[j]<<endl;
    }
    else{
        if(x>=5){
            y=9-x;
            s[j]=y+'0';
      }
    }
    j++;
   }
   cout<<s<<endl;
    return 0;
}

