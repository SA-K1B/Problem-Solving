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
   vector <ll> vx;
   vector <ll> vy;
   for(ll i=0;i<2*n;i++){
    ll x,y;
    cin>>x>>y;
    if(x==0)
        vy.push_back(abs(y));
    else vx.push_back(abs(x));
   }
   sort(vx.begin(),vx.end());
   sort(vy.begin(),vy.end());
   db sum=0;
   for(ll i=0;i<n;i++){
    ll temp=vx[i]*vx[i];
    temp+=vy[i]*vy[i];
    db temp2=(db)temp;
    temp2=sqrt(temp2);
 
    sum+=temp2;
   }
   cout<<fixed<<setprecision(9)<<sum<<endl;
}
int main()
{
 // freopen("i.txt","r",stdin);   
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}