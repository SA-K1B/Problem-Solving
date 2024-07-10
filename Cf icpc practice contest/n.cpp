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
        ll c[4],a[6];
        for(ll i=1;i<=3;i++)
            cin>>c[i];
        for(ll i=1;i<=5;i++)
            cin>>a[i];
        ll f=0;
        for(ll i=1;i<=5;i++){
          if(i==1){
          if(c[1]<a[i]){
              f=1;
              break;
            }
            else{
              c[1]-=a[i];
            }
          }
         else if(i==2){
          if(c[2]<a[i]){
              f=1;
              break;
            }
             else{
              c[2]-=a[i];
            }
          }
        else if(i==3){
          if(c[3]<a[i]){
              f=1;
              break;
            }
            else{
                c[3]-=a[i];
            }
          }
          else if(i==4){
          if(c[1]+c[3]<a[i]){
              f=1;
              break;
            }
            else{
                if(c[1]<a[i]){
                    ll x=a[i]-c[1];
                    c[3]-=x;
                }
            }
          }
          else{
             if(c[2]+c[3]<a[i]){
              f=1;
              break;
            }
          }
       }
       if(f)
        cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;
    }
    return 0;
}


