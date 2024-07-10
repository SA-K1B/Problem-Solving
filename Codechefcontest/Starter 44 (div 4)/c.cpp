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
  int n,i,j,a,b,x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
    int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    // Check if each possible move is valid or not
    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
        int p=i;
        int q=j;
        int cnt=0;
    for (int i = 0; i < 8; i++) {
        // Position of knight after move
        int x = p + X[i];
        int y = q + Y[i];
        if((x==x1&&y==y1)||(x==x2&&y==y2))
            cnt++;
        if(cnt>=2){
            ys;
            return;
        }
       }
      }
    }
   cout<<"NO"<<endl;
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

