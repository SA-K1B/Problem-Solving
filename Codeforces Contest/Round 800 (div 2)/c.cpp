#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
#define Min -1000000000
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define ys cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 1000000007
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
void solve()
{
   ll n,sumn=0,sump=0,f=0;
   cin>>n;
   vector <ll> a(n+5);
   for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0){
      sumn+=abs(a[i]);
    }
    else sump+=a[i];
   }
   if((sump>0||sumn>0)&&a[0]==0){
    no;
    return;
   }
   if(sumn!=sump){
    no;
    return;
   }
   if(n==1){
    if(a[0]==0)
        ys;
    else no;
    return;
   }
   else if(n==2){
    if(a[0]>=0&&a[1]<=0){
        if((a[0]+a[1])==0){
            ys;
            return;
        }
    }
    no;
    return;
   }
   if((a[0]+a[1])<0){
     no;
     return;
    }
   if((a[n-1]!=0)||(a[n-2]!=0)){
    if((a[n-2]+a[n-1])>=0){
        no;
        return;
    }
   }
   for(ll i=0;i<n;i++){
     if(abs(a[i])>=2){
        if((i<n-1&&a[i+1]==0)&&(i>0&&a[i-1]==0)){
            no;
            return;
        }
        if((i==0&&a[1]==0)||(i==n-1&&a[n-2]==0)){
            no;
            return;
        }
     }
     if(a[i]>0){
        if(sumn<a[i]){
             no;
             return;
        }
     }
     else if(a[i]<0)
        sumn-=abs(a[i]);
   }
   ys;
}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

