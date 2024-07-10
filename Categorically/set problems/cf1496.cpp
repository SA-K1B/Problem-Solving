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
  ll n,k;
   cin>>n>>k;
   set <ll> st;
   ll temp=n;
   while(temp--){
    ll x;
    cin>>x;
    st.insert(x);
   }
   ll mx=*(--st.end());
   if(mx+1==st.size()||k==0){
    cout<<st.size()+k<<endl;
   }
   else{
     ll i=0;
    for(auto it: st){
        ll elm=it;
        if(elm!=i){
            break;
        }
        else i++;
     }
     //cout<<mx<<' '<<i<<endl;
     db x2=ceil((mx+i)/2.0);
   //  cout<<x2<<endl;
     ll x3=x2;
     //cout<<x3<<endl;
     auto pos=st.find(x3);
     if(pos!=st.end())
        cout<<st.size()<<endl;
     else cout<<st.size()+1<<endl;
   }
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



