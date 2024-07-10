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
int n,k;
void fun(char c1,char c2,int x,int y){
    double z1=ceil((x*1.0)/k);
    int z=z1-1;
    if(y<z){
        no;
        return;
    }
    int rem=y-z;
    int f=0;
    string s="";
    while (1)
    {
        if(f==0){
            for(int i=1;i<=min(k,x);i++)
               s+=c1;
            f=1;
            x-=min(k,x);   
        }
        else{
          if(z){
            s+=c2;
            for(int i=1;i<=min(k-1,rem);i++)
               s+=c2;
            rem-=min(k-1,rem);
            z--;
            f=0;   
          }
          else{
            while (rem)
            {
                s+=c2;
                rem--;
            }   
          }
        }
       if(x==0&&z==0&&rem==0)
         break;
    }
    cout<<s<<endl;
    return;
    
}
void solve()
{
   int i,j,a,b;
   cin>>n>>k>>a>>b;
   if(a>=b)
    fun('G','B',a,b);
   else fun('B','G',b,a); 
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
