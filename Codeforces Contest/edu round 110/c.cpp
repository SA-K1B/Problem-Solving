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
  ll n;
  // cin>>n;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)
   //cin>>a[i];
  string s1;
    cin>>s1;
   ll len=s1.size();
   ll j=0,x;
   ll i=j+1;
   ll ans=0;
   while(j<len){
  //  cout<<j<<' '<<i<<' '<<ans<<endl;
    if(s1[j]=='?'){
        if(i==len){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=i-1;
            i=j+1;
            //ans--;
            break;
        }
       else if(s1[i]!='?'&&s1[i]==s1[i-1]){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=i;
            i=j+1;
          //  ans--;
        }
        else i++;
    }
    else if(s1[j]=='1'){
         if(i==len){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=i-1;
            i=j+1;
           // ans--;
            break;
        }
        else if(s1[i]!='?'&&s1[i]==s1[i-1]){
          x=i-j;
            ans+=(x*(x+1))/2-x;
            j=i;
            i=j+1;
            //ans--;
        }
        else if((s1[i]=='1'&&(i-j)%2!=0)||(s1[i]=='0'&&(i-j)%2==0)){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=j+1;
            i=j+1;
            //ans--;
        }

        else i++;
     }
     else{
          if(i==len){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=i-1;
            i=j+1;
         //   ans--;
            break;
        }
          else if(s1[i]!='?'&&s1[i]==s1[i-1]){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=i;
            i=j+1;
            //ans--;
        }
        else if((s1[i]=='0'&&(i-j)%2!=0)||(s1[i]=='1'&&(i-j)%2==0)){
            x=i-j;
            ans+=(x*(x+1))/2-x;
            j=j+1;
            i=j+1;
            //ans--;
        }
        else i++;
     }
   }
   cout<<ans+len<<endl;
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



