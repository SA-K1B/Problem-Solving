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
bool cmp(char a,char b){
   if(b=='?')
     return a<b;   
   return a<b;
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
     cin>>s1;
     n=s1.size();
    if(n<26){
        cout<<-1<<endl;
    } 
    else{
        ll q=0;
        map <char,ll> mp;
        for(ll i=0;i<=25;i++){
          if(s1[i]=='?')
             q++;
          else        
          mp[s1[i]]++;
        }
        if(mp.size()+q==26){
         string s="";  
           for(ll i=0;i<26;i++){
               char ch='A'+i;
             if(mp[ch]==0)
                s+=ch;
           }
           ll j=0;
           for(ll i=0;i<26;i++){
              if(mp[s1[i]])
                 cout<<s1[i];
              else{
                  cout<<s[j];
                  j++;
              }   
           }
           for(ll i=26;i<n;i++){
               if(s1[i]=='?')
                cout<<"F";
              else cout<<s1[i];
           } 
        }
        else{
            ll i=1;
            ll j=26;
            ll f=0;
            while (j<n)
            {
                if(s1[i-1]=='?')
                   q--;
                else   
                  mp[s1[i-1]]--;
                if(s1[j]=='?')
                   q++;
                else
                   mp[s1[j]]++;
                /* code */
                ll cnt=0;
                for(auto it: mp){
                  if(it.second)
                     cnt++;
                }
                if(cnt+q==26){
                    f=1;
                    break;
                }
                i++;
                j++;
            }
            if(f){
             //   cout<<i<<j<<endl;
               // cout<<mp.size()<<endl;
               string s="";  
             for(ll k=0;k<26;k++){
               char ch='A'+k;
             if(mp[ch]==0)
                s+=ch;
           }
           //cout<<i<<' '<<j<<' '<<s<<endl;
           ll l=0;
           for(ll k=0;k<i;k++){
              if(s1[k]=='?')
                cout<<"F";
              else cout<<s1[k];
           }
           for(ll k=i;k<=j;k++){
              if(mp[s1[k]])
                 cout<<s1[k];
              else{
                  cout<<s[l];
                  l++;
              } 
            }
            for(ll k=j+1;k<n;k++){
              if(s1[k]=='?')
                cout<<"F";
              else cout<<s1[k];
            }
         }
        else{
            cout<<"-1"<<endl;
        }
     }
    }
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



