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
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
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
char ch[1005][1005];
char d[1005][1005];
ll vis[1005][1005];
vector <char> ans;
ll n,m;
bool isvalid(ll a,ll b){
    if(a<1||a>n||b<1||b>m||vis[a][b]==1||ch[a][b]=='#')
      return false;
      return true;
}
bool bfs(ll sx,ll sy,ll ex,ll ey){
    //cout<<sx<<' '<<sy<<endl;
    vis[sx][sy]=1;
    queue <pair<ll,ll>> q;
    q.push({sx,sy});
   // vector <pair<ll,ll>> ans;
    while(!q.empty()){
        ll curf=q.front().first;
        ll curs=q.front().second;
       // cout<<curf<<' '<<curs<<endl;
        //cout<<curf<<' '<<curs<<endl;
        q.pop();
        if(ch[curf][curs]=='B'){
            ll r=curf;
            ll c=curs;
           // cout<<r<<' '<<c<<endl;
            //cout<<d[r][c]<<endl;
            while (1)
            {
               // cout<<r<<' '<<c<<endl;
                ans.pb(d[r][c]);
                if(ans.back()=='R')
                  c++;
                if(ans.back()=='L')
                  c--;
                 if(ans.back()=='U')
                  r--;
                if(ans.back()=='D')
                  r++;
                /* code */
                if(r==sx&&c==sy)
                  break;
            }
            return true;
        }
            if(isvalid(curf+dx[0],curs+dy[0])){
                    vis[curf+dx[0]][curs+dy[0]]=1;
                    d[curf+dx[0]][curs+dy[0]]='L';
                    // cout<<curf+dx[0]<<' '<<curs+dy[0]<<endl;
                    q.push({curf+dx[0],curs+dy[0]});
            }
            if(isvalid(curf+dx[1],curs+dy[1])){
                    vis[curf+dx[1]][curs+dy[1]]=1;
                    d[curf+dx[1]][curs+dy[1]]='R';
                     //cout<<curf+dx[1]<<' '<<curs+dy[1]<<endl;
                    q.push({curf+dx[1],curs+dy[1]});
            }
            if(isvalid(curf+dx[2],curs+dy[2])){
                    vis[curf+dx[2]][curs+dy[2]]=1;
                    d[curf+dx[2]][curs+dy[2]]='U';
                     //cout<<curf+dx[2]<<' '<<curs+dy[2]<<endl;
                    q.push({curf+dx[2],curs+dy[2]});
            }
            if(isvalid(curf+dx[3],curs+dy[3])){
                    vis[curf+dx[3]][curs+dy[3]]=1;
                    d[curf+dx[3]][curs+dy[3]]='D';
                    // cout<<curf+dx[3]<<' '<<curs+dy[3]<<endl;
                    q.push({curf+dx[3],curs+dy[3]});
            }
        }
        return false;
   /* cout<<ans.size()<<endl;
    for(auto it: ans){
        cout<<it.first<<' '<<it.second<<endl;
    }
    return;*/
}
void solve()
{ 
    ll sx,sy,ex,ey;
  cin>>n>>m;
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
        cin>>ch[i][j];
        vis[i][j]=0;
        if(ch[i][j]=='A'){
           sx=i;
           sy=j;
        }
       else if(ch[i][j]=='B'){
          ex=i;
          ey=j;
       }
    }
  }
  if(bfs(sx,sy,ex,ey)){
      cout<<"YES"<<endl;
      cout<<ans.size()<<endl;
      reverse(ans.begin(),ans.end());
      for(auto it: ans){
        if(it=='R')
          cout<<'L';
        if(it=='L')
          cout<<'R';
        if(it=='D')
          cout<<'U';
        if(it=='U')
          cout<<'D';
      }
  }
  else cout<<"NO"<<endl;
   /*vector <ll> v;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.pb(x);
   }*/
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
    // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}



