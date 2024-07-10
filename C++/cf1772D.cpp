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
void solve()
{
   int n,i,j;
   cin>>n;
   vector <int> a(n+5);
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   int sum1=a[0]+a[1];
   int avg1=(sum1)/2;
   if(avg1*2!=sum1){
     if(a[0]>a[1])
      avg1++;
   }
   int f=0;
   int pre=abs(a[0]-avg1);
   for(i=1;i<n;i++){
     int d=abs(a[i]-avg1);
     if(d<pre){
        f=1;
        break;;
     }
     pre=d;
   }
   if(f==0){
    cout<<avg1<<endl;
    return;
   }
   sum1=a[n-1]+a[n-2];
   avg1=(sum1)/2;
   if(avg1*2!=sum1){
     if(a[n-2]>a[n-1])
      avg1++;
   }
   //cout<<avg1<<endl;
    f=0;
    pre=abs(a[0]-avg1);
   for(i=1;i<n;i++){
     int d=abs(a[i]-avg1);
     if(d<pre){
        f=1;
        break;;
     }
     pre=d;
   }
   if(f==0){
    cout<<avg1<<endl;
    return;
   }
   cout<<"-1"<<endl;

}
int main()
{
    fast;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}
