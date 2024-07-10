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
   string s="",st="";
   cin>>s>>st;
   ll sz1=s.size();
   ll sz2=st.size();
   ll l=lcm(sz1,sz2);
   //cout<<l<<endl;
   ll i=0;
   ll j=sz1;
   while(j<l){
    s+=s[i%sz1];
    i++;
    j++;
   }
   //cout<<s.size()<<endl;
   i=0;
   j=sz2;
   while(j<l){
    st+=st[i%sz2];
    i++;
    j++;
   }
   j=0;
   ll f=0;
   while(j<l){
    if(s[j]!=st[j]){
        f=1;
        break;
    }
    j++;
   }
   if(f)
    cout<<"-1"<<endl;
   else cout<<s<<endl;
   /*for(ll i=0;i<n;i++)
    cin>>a[i];*/
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
    //    cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


