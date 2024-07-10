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
bool cmp(string a,string b){
   if(a.size()==b.size())
      return a<b;
   return a.size()<b.size();

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
vector <string> all;
void solve()
{
  ll n;
   cin>>n;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
  //ll  a[100005];
  //for(ll i=0;i<n;i++)

  string s6;
  cin>>s6;
  vector <string> v;
  for(ll i=0;i<n;i++){
        string s1="";
//        cout<<<<endl;
        s1+=s6[i];
        v.pb(s1);
       // cout<<s1<<endl;
    }
    ll i,j,k;
    for( i=0,j=i+1;j<n;i++,j++){
      string s1="";
      s1+=s6[i];
          //s1+='a'+j;
          string s2=s1;
          s2+=s6[j];
          v.pb(s2);
    }
     for( i=0, j=i+1, k=j+1;k<n;i++,j++,k++){
      string s1="";
      s1+=s6[i];
          string s3=s1;
          s3+=s6[j];
          string s2=s3;
          s2+=s6[k];
          v.pb(s2);
           //s1+='a'+k;
           //all.pb(s1);
     }
    sort(v.begin(),v.end());
  //  ll mn=min(all.size(),);
   //for(auto it: v)
   // cout<<it<<' ';
   for(auto it:all){
    if(!binary_search(v.begin(),v.end(),it)){
        cout<<it<<endl;
       return;
     }
   }
   /* for(ll i=0,j=0;i<all.size();){
//cout<<i<<' '<<j<<endl;
        if(i==0){
            if(v[i]>all[i]){
            cout<<all[i]<<endl;
            return;
          }
          j++;
           i++;
        }
        else if(v[j]!=v[j-1]){
        if(v[j]>all[i]){
            cout<<all[i]<<endl;
            return;
        }
        i++;
        j++;
      }
      else j++;
    }*/
       //for(auto it: v)
        //cout<<it<<' ';
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
    for(ll i=0;i<26;i++){
        string s1="";
        s1+='a'+i;
        all.pb(s1);
    }
    for(ll i=0;i<26;i++){
      string s1="";
      s1+='a'+i;
      for(ll j=0;j<26;j++){
          //s1+='a'+j;
          string s2=s1;
          s2+='a'+j;
          all.pb(s2);
        }
    }
     for(ll i=0;i<26;i++){
      string s1="";
      s1+='a'+i;
      for(ll j=0;j<26;j++){
          string s3=s1;
          s3+='a'+j;
        for(ll k=0;k<26;k++){
          string s2=s3;
          s2+='a'+k;
          all.pb(s2);
           //s1+='a'+k;
           //all.pb(s1);
          }
        }
    }
for(auto it: all)
        cout<<it<<' ';
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



