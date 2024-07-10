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
        res=mul(res,a);
    }
    b/=2;
    a=mul(a,a);
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
void solve()
{
  ll n;
   cin>>n;
   char ch[205][205];
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>ch[i][j];
    }
  }
  if(ch[1][2]==ch[2][1]){
    if(ch[n][n-1]==ch[n-1][n]){
        if(ch[1][2]!=ch[n][n-1])
        cout<<"0"<<endl;
        else{
           cout<<"2"<<endl;
            cout<<1<<' '<<2<<endl;
            cout<<2<<' '<<1<<endl;
           }
        }
    else{
        cout<<"1"<<endl;
        char ch1=ch[1][2];
        if(ch1=='1'){
            if(ch[n][n-1]=='1'){
                cout<<n<<' '<<n-1<<endl;
            }
            else cout<<n-1<<' '<<n<<endl;
        }
        else{
            if(ch[n][n-1]=='0'){
                cout<<n<<' '<<n-1<<endl;
            }
            else cout<<n-1<<' '<<n<<endl;
        }
    }
  }
  else if(ch[n][n-1]==ch[n-1][n]){
        cout<<"1"<<endl;
        char ch1=ch[n][n-1];
        if(ch1=='1'){
            if(ch[1][2]=='1'){
                cout<<1<<' '<<2<<endl;
            }
            else cout<<2<<' '<<1<<endl;
        }
        else{
            if(ch[1][2]=='0'){
                cout<<1<<' '<<2<<endl;
            }
            else cout<<2<<' '<<1<<endl;
        }
  }
  else{
    cout<<"2"<<endl;
   if(ch[1][2]=='1')
                cout<<1<<' '<<2<<endl;
    else
                cout<<2<<' '<<1<<endl;
    if(ch[n][n-1]=='0'){
                cout<<n<<' '<<n-1<<endl;
            }
            else cout<<n-1<<' '<<n<<endl;
  }
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
 // string s1;
 // cin>>s1;
  //cin>>s1;
   //vector<ll> res;
   //vector <pair<ll,ll>> vp;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



