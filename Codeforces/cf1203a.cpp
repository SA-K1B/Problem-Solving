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
        ll p1,y,x=0,f=0,n,a[205],p[205];
        cin>>n;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            if(i==1)
                p1=a[i];
            p[a[i]]=i;
        }
     //  cout<<p1<<endl;
        ll f1=0;
        if(p1-1>=1){
         //cout<<"s"<<endl;
            if(p[p1-1]==n)
                f1=1;
        }
        else{
                //cout<<"s"<<endl;
            if(p[n]==n)
                f1=1;
        }
        if(f1==0){
             if(p1+1<=n){
            if(p[p1+1]==n)
                f1=1;
          }
          else{
            if(p[1]==n)
                f1=1;
          }
     }
     if(f1==0){
        cout<<"NO"<<endl;
        continue;
     }
        // for(ll i=1;i<=n;i++)
          //  cout<<p[i]<<' ';
       for(ll i=1;i<=n-1;){
        if(p[i]==1){
            i++;
        }
        else{
            if(p[i+1]==1)
                i+=2;
            else{
                if(x==0){
                   x=p[i]-p[i+1];
                   i++;
                }
            else{
                   y=p[i]-p[i+1];
                    if(x!=y){
                        f=1;
                        break;
                    }
                    else i++;
             }
          }
        }
    }
        if(f)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 }
    return 0;
}


