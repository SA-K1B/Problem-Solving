#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    cin>>s1;
    ll s=s1.size();
    string s2="heidi";
    ll j=0,i=0;
    while(j<s&&i<5){
     if(s1[j]==s2[i]){
      i++;
      }
      j++;
    }
    if(i==5)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

