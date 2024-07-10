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
void solve()
{
  ll n,a[105];
  cin>>n;
  for(ll i=0;i<n;i++)
    cin>>a[i];
  string s1="";
  ll k=200;
  while(k--){
    s1+='a';
  }
  cout<<s1<<endl;
  for(ll i=0;i<n;i++){
    char ch=s1[a[i]];
    if(ch=='a')
        s1[a[i]]='b';
    else s1[a[i]]='a';
    cout<<s1<<endl;
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
    cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


