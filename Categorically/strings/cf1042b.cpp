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
   map <string,ll> mp1;
   map <string,ll> mp2;
   map <string,ll> mp3;
   mp1["A"]=mp1["B"]=mp1["C"]=mp2["AB"]=mp2["BC"]=mp2["AC"]=mp3["ABC"]=Max;
   while (n--)
   {
       ll c;
       string s;
       cin>>c>>s;
       sort(s.begin(),s.end());
       if(s.size()==1){
         mp1[s]=min(c,mp1[s]); 
       }
       if(s.size()==2){
         mp2[s]=min(c,mp2[s]);
       }
      else{
         mp3[s]=min(c,mp3[s]);
       }
       /* code */
   }
   ll sum1=0;
   for(auto it: mp1)
      sum1+=it.second;
   ll a,b,c;
    //a=b=c=Max;
    a=mp2["AB"];
    b=mp2["BC"];
    c=mp2["AC"];
    ll sum2=0;
     sum2=min(a+b,b+c);
     sum2=min(sum2,a+c);      
    ll sum3=mp3["ABC"];
    ll sum4=mp1["A"]+mp2["BC"];
    ll sum5=mp1["B"]+mp2["AC"];
    ll sum6=mp1["C"]+mp2["AB"];
    ll ans=min(sum1,sum2);
    ans=min(ans,sum3);
    ans=min(ans,sum4);
    ans=min(ans,sum5);
    ans=min(ans,sum6);
    if(ans>300000)
       cout<<"-1"<<endl;
    else cout<<ans<<endl;      
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
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



