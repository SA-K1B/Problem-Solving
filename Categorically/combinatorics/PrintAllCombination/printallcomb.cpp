#include<bits/stdc++.h>
using namespace std;
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
void comb(int a[],int tmp[],int s,int e,int ind,int r){
    if(r==ind){
        for(int j=0;j<r;j++)
            cout<<tmp[j]<<' ';
        cout<<endl;
        return;
    }
    for(int i=s;i<=e&&e-i+1>=r-ind;i++){
        if(i<e-1&&(a[i]==a[i+1])){
            continue;
        }
        tmp[ind]=a[i];
         comb(a,tmp,i+1,e,ind+1,r);
    }
}
void prnt(int a[],int n,int r){
  int tmp[r];
  comb(a,tmp,0,n-1,0,r);
}
void solve()
{
  int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
   prnt(a,n,3);
 // string s;
 // cin>>s;
}
int main()
{
    fast;
    int t=1;
  //  cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

