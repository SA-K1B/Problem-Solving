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
  ll a,b;
   cin>>a>>b;
    string s1;
  cin>>s1;
   ll len=a+b;
   if(len%2==0){
    if(a%2!=0&&b%2!=0){
        cout<<"-1"<<endl;
        return;
    }
   }
   else{
    char ch=s1[len/2];
    if((ch=='0'&&(b&1))||(ch=='1'&&(a&1))){
       cout<<"-1"<<endl;
       return;
    }
    else if(ch=='?'){
        if(a&1)
            s1[len/2]='0';
        else s1[len/2]='1';
    }
   }
   //cout<<len<<endl;
   ll j=0;
   while(j<len/2){
    if(s1[j]=='?'&&s1[len-j-1]!='?'){
          s1[j]=s1[len-j-1];
    }
    else if(s1[len-j-1]=='?'&&s1[j]!='?')
        s1[len-j-1]=s1[j];
    if(s1[j]!=s1[len-j-1]){
        cout<<"-1"<<endl;
        return;
    }
    j++;
   }
   //cout<<s1<<endl;
  ll c0=count(s1.begin(),s1.end(),'0');
  ll c1=count(s1.begin(),s1.end(),'1');
  if(c0>a||c1>b){
    cout<<"-1"<<endl;
    return;
  }
  else{
    ll x=a-c0;
    ll y=b-c1;
    j=0;
    while(j<len/2){
      if(s1[j]=='?'){
        if(x){
            s1[j]='0';
            s1[len-j-1]='0';
            x-=2;
        }
        else{
            s1[j]='1';
            s1[len-j-1]='1';
        }
      }
      j++;
    }
  }
  cout<<s1<<endl;
  //cout<<c0<<' '<<c1<<endl;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
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



