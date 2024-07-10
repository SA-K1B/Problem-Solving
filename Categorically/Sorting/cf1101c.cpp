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
int M=1000000007;
int mod(int x){
        return ((x%M + M)%M);
    }
int add(int a, int b){
        return mod(mod(a)+mod(b));
    }
int mul(int a, int b){
        return mod(mod(a)*mod(b));
    }
int powr(int a,int b){
   if(b==0)
      return 1;
   if(b==1)
      return a;
   int res=1;
   while(b>0){
    if(b&1){
        res=mul(res,a);
    }
    b/=2;
    a=mul(a,a);
  }
  return res;
}
bool cmp(pair<int,int>a,pair<int,int>b){
   return a.second<b.second;
}
int is[1000000];
vector <int> primes;
void primegen(){
    int n,i,j,k,x,mx=1000000;
    primes.push_back(2);
    for(int i=3;i<=mx;i+=2){
        if(is[i]==0){
         for(int j=i*i;j<=mx;j+=2*i){
          is[j]=1;
         }
       }
    }
    for(int i=3;i<=mx;i+=2){
        if(is[i]==0)
            primes.push_back(i);
    }
}
int ncr(int x,int y){
   int ans=1,s=1;
    while(s<=y){
        ans*=(x-s+1);
        ans/=s;
        s++;
    }
  return ans;
}
void solve()
{
  int n;
  cin>>n;
  vector <pair<pair<int,int>,int>> v;
  for(int i=1;i<=n;i++){
    int x,y;
    cin>>x>>y;
    v.pb({{x,y},i});
  }
  vector<int> v1(100005,0);
  int a=-1,g,b=-1,f=0;
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
    if(i==0){
      g=v[i].second;
      v1[g]=1;
      a=max(a,v[i].first.second);
    }
    else{
        if(v[i].first.first<=a){
            g=v[i].second;
            v1[g]=1;
            a=max(a,v[i].first.second);
        }
        else{
            b=max(b,v[i].first.second);
            f=1;
        }
    }
    //cout<<a<<' '<<b<<endl;
  }
    if(f==0){
        cout<<"-1"<<endl;
        return;
    }
     for(int i=1;i<=n;i++){
        if(v1[i])
            cout<<"1"<<' ';
        else {
                cout<<"2"<<' ';
        }
     }
     cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
