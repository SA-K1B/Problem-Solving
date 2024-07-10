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
ll a[200005],b[200005];
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        ll p1=-1,p2;
        sort(b,b+n);
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                p1=i;
                break;
            }
        }
        if(p1==-1){
            cout<<"0"<<endl;
            continue;
        }
         for(ll i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                p2=i;
                break;
            }
        }
        ll i,f=0;
        for(i=p1+1;i<p2;i++){
            if(a[i]==b[i]){
                f=1;
                break;
            }
        }
        if(f)
            cout<<"2"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}


