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
ll l[1005][1005];
bool lcs(string st1,string st2){
   //cout<<st1<<' '<<st2<<endl;
   ll sz=st1.size();
   for(ll i=1;i<=sz;i++){
    for(ll j=1;j<=sz;j++){
        if(st1[i-1]==st2[j-1])
            l[i][j]=l[i-1][j-1]+1;
        else{
            l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
     }
   }
   if(l[sz][sz]==sz)
    return true;
   return false;
}
void solve()
{
   string s1,s2;
   cin>>s1;
   s2=s1;
   reverse(s2.begin(),s2.end());
  // cout<<s1<<' '<<s2<<endl;
   bool is=lcs(s1,s2);
   if(is)
    cout<<"First"<<endl;
   else{
       ll x=s1.size();
    if(x%2)
       cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
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
   // cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


