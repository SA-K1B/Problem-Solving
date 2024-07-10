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
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    int n,m,x,y;
    string ch[1005];
    cin>>n>>m>>x>>y;
    y=min(y,2*x);
    for(int i=1;i<=n;i++)
        cin>>ch[i];
    int cost=0;
      for(int i=1;i<=n;i++){
        string s1=ch[i];
        int j=0;
        while(j<m){
            if(j!=m-1&&s1[j]=='.'&&s1[j+1]=='.'){
               cost+=y;
               j+=2;
            }
            else if(s1[j]=='.'){
                cost+=x;
                j++;
            }
            else j++;
        }
      }
       cout<<cost<<endl;
  }
    return 0;
}

