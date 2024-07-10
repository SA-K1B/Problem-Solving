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
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO"<<endl;
    }
    else{
        ll x=s1.size();
        ll y=s2.size();
        ll j=0,f=0,f2=0;
        while(j<x){
            if(s1[j]=='1'){
                f=1;
                break;
            }
                j++;
         }
         j=0;
          while(j<x){
            if(s2[j]=='1'){
                f2=1;
                break;
            }
                j++;
         }
         if(f==f2)
            cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    return 0;
}

