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
ll M=1000000007;
ll mod(ll x){
        return ((x%M + M)%M);
    }
ll add(ll a, ll b){
        return mod(mod(a)+mod(b));
    }
ll mul(ll a, ll b){
        return mod(mod(a)*mod(b));
    }
ll powr(ll a,ll b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   ll res=1;
   while(b>0){
    if(b&1){
        res*=a;
    }
    b/=2;
    a*=a;
  }
  return res;
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
   return a.second<b.second;
}
ll is[1000000];
vector <ll> primes;
void primegen(){
    ll n,i,j,k,x,mx=1000000;
    primes.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0){
         for(ll j=i*i;j<=mx;j+=2*i){
          is[j]=1;
         }
       }
    }
    //cout<<"2"<<endl;
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            //cout<<i<<endl;
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
         //   cout<<ans<<endl;
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
vector <string> v;
void pre()
{
    for(ll i=0;i<=60;i++){
      ll x=powr(2,i);
        v.pb(to_string(x)); 
    }
}
void solve()
{
  string n;
   cin>>n;
   ll ans=Max;
   ll l=n.size();
   for(ll h=0;h<=60;h++){
    string s1=v[h];
    ll i,j,need=0;
    for(i=0,j=0;i<s1.size(),j<l;){
     if(s1[i]==n[j]){
                i++;
                j++;
        }
     else j++;
     if(j==l){
            //cout<<s1<<endl;
            need+=(l-i+s1.size()-i);
            break;
      }   
    }
    if(i==s1.size()){
        //cout<<s1<<endl;
        need=abs(l-s1.size());
    }
    ans=min(ans,need);
    //cout<<ans<<' '<<s1<<endl;
   }
   cout<<ans<<endl;
   /*vector <ll> a(n);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }*/
  //ll  a[100005];
  /*for(ll i=0;i<n;i++){
   cin>>a[i];
  }*/
 // string s1;
 // cin>>s1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    pre();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



