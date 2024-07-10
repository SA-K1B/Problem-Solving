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
   string s;
  cin>>s;
  if(s[0]!='9'){
    for(auto it: s){
        int x=it-'0';
        cout<<9-x;
    }
    cout<<endl;
  }
  else{
    int x=n+1;
    string s1="";
    while(x--){
     s1+='1';
    }
    i=n;
    j=n-1;
    int f=0;
    string ans="";
    while(j>=0){
    if(f==1){
        s1[i]='0';
    }
     if(s1[i]>=s[j]){
        int x1=s1[i]-'0';
        int y1=s[j]-'0';
        char c=(x1-y1)+'0';
        ans+=c;
        f=0;
     }
     else{
        string s3="";
        s3+='1';
        s3+=s1[i];
        stringstream ss;
        ss<<s3;
        int boro;
        ss>>boro;
        int choto=s[j]-'0';
        char c=(boro-choto)+'0';
        ans+=c;
        f=1;
     }
     i--;
     j--;
    }
    rv(ans);
    cout<<ans<<endl;
  }
}
int main()
{
    fast;
    //freopen("i.txt","r",stdin);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //  cout<<"Case "<<i<<":"<<' ';
        solve();
    }
    return 0;
}

