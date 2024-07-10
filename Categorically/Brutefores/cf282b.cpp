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
bool check(ll x,ll y){
   if(abs(x-y)>500)
      return false;
   return true;
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string ans="";
    ll n,sum1=0,sum2=0;
    cin>>n;
    while(n--){
        ll x,y;
        cin>>x>>y;
        ll x1=sum1-sum2;
        if(x1==0){
            if(x<=y){
                ans+='A';
                sum1+=x;
            }
            else{
                ans+='G';
                sum2+=y;
            }
        }
        else{
          sum1+=x;
          if(check(sum1,sum2)){
            ans+='A';
          }
          else{
             sum1-=x;;
             sum2+=y;
             ans+='G';
          }
        }
    }
    cout<<ans<<endl;
    return 0;
}

