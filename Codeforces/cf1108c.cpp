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
  // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    string s1,s2;
    cin>>n>>s1;
    char s[]="BGR";
    ll ans=Max;
   do{
        ll j=0,cnt=0;
        while(j<n){
            if(s[j%3]!=s1[j])
              cnt++;
             j++;
        }
        if(cnt<ans){
            ans=cnt;
            ll k=0;
            while(k<3){
               s2[k]=s[k];
                k++;
            }
        }
    } while(next_permutation(s,s+3));
    cout<<ans<<endl;
    ll k=0;
    while(k<n){
        cout<<s2[k%3];
        k++;
    }
    return 0;
}

