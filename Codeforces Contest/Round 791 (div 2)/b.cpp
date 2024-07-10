#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 1000000000000000000
#define Min -1000000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
ll M=1000000007;
ll mod(ll x){
        return (x%M);
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
    for(ll i=3;i<=mx;i+=2){
        if(is[i]==0)
            primes.push_back(i);
    }
}
ll ncr(ll x,ll y){
   ll ans=1,s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
void solve()
{
  ll n,q;
   cin>>n>>q;
   vector <ll> a(n+5);
   ll sum=0;
   for(ll i=1;i<=n;i++){
    cin>>a[i];
    sum+=a[i];
   }
   ll al=0;
   set <ll> st;
   while(q--){
    ll ch;
    ll in,val;
    cin>>ch;
    if(ch==1){
        cin>>in>>val;
        if(al==0){
          sum+=val-a[in];
        cout<<sum<<endl;
        a[in]=val;
        }
        else if(st.empty()&&al>0){
         sum+=val-al;
        cout<<sum<<endl;
        a[in]=val;
        st.insert(in);
        }
        else if(!st.empty()){
         auto it=st.find(in);
         if(it!=st.end()){
        sum+=val-a[in];
        cout<<sum<<endl;
        a[in]=val;
         }
         else{
        sum+=val-al;
        cout<<sum<<endl;
        a[in]=val;
        st.insert(in);
         }
        }
    }
    else{
        st.clear();
        cin>>val;
        al=val;
        sum=val*n;
        cout<<sum<<endl;
    }
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

