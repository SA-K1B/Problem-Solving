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
   ll ind,x,n,a[100005];
   cin>>n>>x;
   ll mn=Max;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    ll temp=a[i];
    ll cnt=0;
    while(temp&&temp%x==0){
        cnt++;
        temp/=x;
    }
    if(cnt<mn){
       mn=min(mn,cnt);
       ind=i;
    }
   }
   ll sum=0;
   for(ll i=0;i<n;i++){
    if(i<ind){
    sum+=a[i];
    ll mul=x,temp=mn+1,y=a[i];
    while(temp){
        y/=x;
        sum+=(y*mul);
        temp--;
        mul*=x;
    }
   }
   else{
    sum+=a[i];
    ll mul=x,temp=mn,y=a[i];
    while(temp){
        y/=x;
        sum+=(y*mul);
        temp--;
        mul*=x;
    }
   }
}
   cout<<sum<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<' ';
        solve();
    }
    return 0;
}


