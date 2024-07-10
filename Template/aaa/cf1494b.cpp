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
  ll n,l,r,u,d,nu,nr,nl,nd;
   cin>>n>>u>>r>>d>>l;
   nr=r;
   nl=l;
   nu=u;
   nd=d;
   if(u==0||u==1||d==0||d==1){
      if(r==n&&l==n){
          cout<<"NO"<<endl;
          return;
      }
   }
   if(u==n){
       if(nl==0||nr==0){
          cout<<"NO"<<endl;
          return;
       }
       else{
           nl--;
           nr--;
       }
   }
   if(d==n){
       if(nl==0||nr==0){
          cout<<"NO"<<endl;
          return;
       }
       else{
           nl--;
           nr--;
       }
   }
   if(r==n){
       if(nu==0||nd==0){
          cout<<"NO"<<endl;
          return;
       }
       else{
           nu--;
           nd--;
       }
   }
   if(l==n){
       if(nu==0||nd==0){
          cout<<"NO"<<endl;
          return;
       }
       else{
           nu--;
           nd--;
       }
   }

   if(u==n-1){
        if(nl>1)
         nl--;
        else if(nr>1)
         nr--;
        else if(nl)
          nl--;
        else if(nr)
        nr--;
        else{
          cout<<"NO"<<endl;
          return; 
        }  
   }     
   if(d==n-1){
        if(nl>1)
         nl--;
        else if(nr>1)
         nr--;
        else if(nl)
          nl--;
        else if(nr)
        nr--;
        else{
          cout<<"NO"<<endl;
          return; 
        }  
   }
   if(l==n-1){
        if(nu>1)
         nu--;
        else if(nd>1)
         nd--;
        else if(nu)
          nu--;
        else if(nd)
        nd--;
        else{
          cout<<"NO"<<endl;
          return; 
        }  
   }
   if(r==n-1){
        if(nu>1)
         nu--;
        else if(nd>1)
         nd--;
        else if(nu)
          nu--;
        else if(nd)
        nd--;
        else{
          cout<<"NO"<<endl;
          return; 
        }  
   }
   if(nu<0||nd<0||nl<0||nr<0){
       cout<<"NO"<<endl;
   }
   else cout<<"YES"<<endl;       
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
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
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
      // cout<<setprecision(15);
        solve();
    }
    return 0;
}



