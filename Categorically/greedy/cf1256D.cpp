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
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s1;
        vector <ll> v;
        cin>>s1;
        if(k==0){
            cout<<s1<<endl;
            continue;
        }
        for(ll i=0;i<n;i++){
            if(s1[i]=='0')
                v.pb(i);
        }
        ll sum=0,j=0;
        ll sz=v.size();
        if((n-sz)*sz<=k){
            sort(s1.begin(),s1.end());
            cout<<s1<<endl;
            continue;
        }
        for(ll i=0;i<sz;i++){
           if(v[i]-j<=0){
               j++;
               continue;
           }
         if(sum+(v[i]-j)<=k){
           sum+=v[i]-j;
           swap(s1[j],s1[v[i]]);
           j++;
          }
          else{
            ll x=k-sum;
            swap(s1[v[i]-x],s1[v[i]]);
            break;
          }
        }
        cout<<s1<<endl;
    }
    return 0;
}

