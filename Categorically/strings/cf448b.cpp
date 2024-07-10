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
  // cin>>n;
   /*vector <ll> a(n);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }*/
  //ll  a[100005];
  /*for(ll i=0;i<n;i++){
   cin>>a[i];
  }*/
  string s1,s2;
   cin>>s1>>s2;
  ll sz1=s1.size();
  ll sz2=s2.size();
  if(sz1<sz2){
      cout<<"need tree"<<endl;
      return;
  }
   map <char,ll> mp;
    for(ll i=0;i<sz1;i++){
       mp[s1[i]]++;
    }
  for(ll i=0;i<sz2;i++){
      char ch=s2[i];
      if(mp[ch]<=0){
          cout<<"need tree"<<endl;
          return;
      }
      mp[ch]--;
   }
   ll op1=0,op2=0;
   if(sz1>sz2)
      op1=1;
      ll j=0;
   for(ll i=0;i<sz2;i++){
       char ch=s2[i];
       while (j<sz1){
           if(ch==s1[j]){
             break;
           }
           j++;  
       }
       //cout<<ch<<' '<<j<<endl;
       if(j>=sz1){
         op2=1;
         break;  
       }
       j++;
   }
   if(op1&&op2)
      cout<<"both"<<endl;
   else if(op1==1&&op2==0)
     cout<<"automaton"<<endl;
   else if(op1==0&&op2==1)
     cout<<"array"<<endl;
   else cout<<"need tree"<<endl;           
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