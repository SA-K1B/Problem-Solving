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

   ll n;
   cin>>n;
   string s1;
   cin>>s1;
   ll sz=s1.size();
   if(sz%2==0)
    cout<<"NO"<<endl;
   else{
    ll dif=sz-11;
    ll j=0,cnt=0;
    while(j<=dif){
      if(s1[j]=='8')
        cnt++;
      j++;
    }
    if(cnt<=dif/2)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
      //  cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


