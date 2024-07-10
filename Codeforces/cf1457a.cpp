#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;

int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll t,x1,y1,mid1,mid2;
    cin>>t;
    while(t--){
        ll n,m,r,c;
        cin>>n>>m>>r>>c;
        if(n&1){
             mid1=n/2+1;
            if(r>=mid1){
             x1=1;
            }
            else{
                 x1=n;
            }
        }
        else{
             mid1=n/2;
            if(r>mid1){
                 x1=1;
            }
            else{
                 x1=n;
            }
        }
         if(m&1){
             mid2=m/2+1;
            if(c>=mid2){
                 y1=1;
            }
            else{
                 y1=m;
            }
        }
        else{
             mid2=m/2;
            if(c>mid2){
                 y1=1;
            }
            else{
                 y1=m;
            }
        }
        cout<<abs(r-x1)+abs(c-y1)<<endl;
    }
    return 0;
}

