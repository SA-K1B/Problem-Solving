#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define fr(i,n,j) for(i=j;i<n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl                
#define dbg(x) cout<<#x<<": "<<x<<endl;    
#define M 1000000007                          
#define ll long long int                   
#define pb push_back                          
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define srtn(v,n) sort(v.begin(),v.begin()+n)
#define rv(v) reverse(v.begin(),v.end())
vi a(300005),b(300005);
bool check(int val,int cnt,vector<pair<int,int>> v){
   // cout<<val<<endl;    
    if(cnt==0)
     return 0;
      cnt--;
    vector<pair<int,int>> tmp;
    for(int i=0;i<v.size();i++){
        if(val==v[i].first||val==v[i].second){
            continue;
        }
        else tmp.pb({v[i].first,v[i].second});
    }
    
    //cout<<endl;
    if(tmp.size()==0)
      return 1;
    return (check(tmp[0].first,cnt,tmp)||check(tmp[0].second,cnt,tmp));  
}
void solve()
{
   int n,i,j,m;
   cin>>n>>m;
   vector <pair<int,int>> v;
   for(i=0;i<m;i++){
    cin>>a[i]>>b[i];
    v.pb({a[i],b[i]});
   }             
   if(check(v[0].first,2,v)||check(v[0].second,2,v))
    ys;         
   else no;  
}           
int main()
{         
    fast; 
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
