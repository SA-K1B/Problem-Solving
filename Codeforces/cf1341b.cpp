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
ll a[200010],b[200005];
int main()
{
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        for(ll i=1;i<=n;i++)
          cin>>a[i];
          ll l=0;
          b[1]=0;
        for(ll i=2;i<n;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                b[i]=1;
            else b[i]=0;
               //cout<<<<endl;
        }
        b[n]=0;
       /* for(ll i=1;i<=n;i++)
            cout<<b[i]<<' ';*/
     //   cout<<l<<endl;
        ll peak=0;
        ll low=1,p=2,f=0;
        for(ll i=2;i<k;i++){
            if(b[i]==1){
                if(i==p)
                    f=1;
                peak++;
            }
        }
        //cout<<peak<<endl;;
        p++;
        ll mx=peak;
        for(ll i=2;i<=n-k+1;i++){
            if(f==1)
                peak--;
            if(b[p]==1)
                    f=1;
            else f=0;
            if(b[i+k-2]==1){
                peak++;
                //cout<<i<<endl;
            }
              //  cout<<peak<<' '<<i<<endl;
            if(peak>mx){
                mx=peak;
                low=i;
             //   cout<<peak<<' '<<i<<endl;
            }
            p++;
        }
        cout<<mx+1<<' '<<low<<endl;
    }
    return 0;
}

