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
  ll a,b,k;
   cin>>a>>b>>k;
   if(a>=b){
       if(k&1){
       string ans="";
       ans+='0';
       ll cnt=0;
       char cur='1';
       while (cnt<k)
       {
           ans+=cur;
           cnt++;
           if(cur=='1')
             cur='0';
           else cur='1';  
       }
       ll x=b-((k/2)+1);
       while (x)
       {
           ans+='1';
           x--;
           /* code */
       }
       string s="";
       ll y=a-((k/2)+1);
       while (y)
       {
           s+='0';
           y--;
           /* code */
       }
       cout<<s+ans<<endl;
     }
     else{
       string ans="";
       ans+='0';
       ll cnt=0;
       char cur='1';
       ll x1=b-(k/2);
       while(x1)
       {
           ans+=cur;
           x1--;
           /* code */
       }
       //cout<<cnt<<' '<<ans<<endl;
       while (cnt<k)
       {
           ans+=cur;
           cnt++;
           if(cur=='1')
             cur='0';
           else cur='1';  
       }
       string s="";
       ll y=a-((k/2)+1);
       while (y)
       {
           s+='0';
           y--;
           /* code */
       }
       cout<<s+ans<<endl;
     }
   }
    else{
       if(k&1){
       string ans="";
       ans+='1';
       ll cnt=0;
       char cur='0';
       while (cnt<k)
       {
           ans+=cur;
           cnt++;
           if(cur=='1')
             cur='0';
           else cur='1';  
       }
       ll x=a-((k/2)+1);
       while (x)
       {
           ans+='0';
           x--;
           /* code */
       }
       string s="";
       ll y=b-((k/2)+1);
       while(y)
       {
           s+='1';
           y--;
           /* code */
       }
       cout<<s+ans<<endl;
     }
     else{
       string ans="";
       ans+='1';
       ll cnt=0;
       char cur='0';
       ll x1=a-(k/2);
       while(x1)
       {
           ans+=cur;
           x1--;
           /* code */
       }
       //cout<<cnt<<' '<<ans<<endl;
       while (cnt<k)
       {
           ans+=cur;
           cnt++;
           if(cur=='1')
             cur='0';
           else cur='1';  
       }
       string s="";
       ll y=b-((k/2)+1);
       while (y)
       {
           s+='1';
           y--;
           /* code */
       }
       cout<<s+ans<<endl;
     }
   } 
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
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
      // cout<<setprecision(15);
        solve();
    }
    return 0;
}



