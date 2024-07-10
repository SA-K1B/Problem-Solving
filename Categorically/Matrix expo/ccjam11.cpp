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
void matmul(ll X[][3],ll Y[][3],ll d){
    ll res[d+1][d+1];
    for(ll i=0;i<d;i++){
        for(ll j=0;j<d;j++){
            res[i][j]=0;
            for(ll k=0;k<d;k++)
                res[i][j]=add(res[i][j],mul(X[i][k],Y[k][j]));
        }
    }
    for(ll i=0;i<d;i++){
        for(ll j=0;j<d;j++){
         X[i][j]=res[i][j];
         }
    }
}
void solve()
{
  ll n;
  cin>>n;
  ll A[3],mm[3][3],I[3][3];
  mm[0][0]=0;
  mm[0][1]=0;
  mm[0][2]=1;
  mm[1][0]=1;
  mm[1][1]=0;
  mm[1][2]=1;
  mm[2][0]=0;
  mm[2][1]=1;
  mm[2][2]=1;
  A[0]=1;
  A[1]=2;
  A[2]=4;
  for(ll i=0;i<3;i++){
    for(ll j=0;j<3;j++){
        if(i==j)
            I[i][j]=1;
        else I[i][j]=0;
    }
  }
  ll k=n-1;
  while(k>0){
    if(k&1){
        matmul(I,mm,3);
    }
    k/=2;
    matmul(mm,mm,3);
  }
  cout<<add(mul(A[0],I[0][0]),add(mul(A[1],I[1][0]),mul(A[2],I[2][0])))<<endl;
  /*for(ll i=0;i<1;i++){
    for(ll j=0;j<2;j++){
      cout<<A[i][j]<<' ';
    }
    cout<<endl;
  }*/
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





