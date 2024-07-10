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
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        char s1[100005];
        ll i;
        for(i=0;i<n-2;i++)
            s1[i]='a';
        s1[i++]='b';
        s1[i++]='b';
        s1[i]='\0';
        if(k==1){
            cout<<s1<<endl;
        }
        else{
                ll f=0,cnt=1;
             while(next_permutation(s1,s1+n)){
                cnt++;
                if(k==cnt){
                    for(ll i=0;i<n;i++)
                        cout<<s1[i];
                      cout<<endl;
                      f=1;
                }
                if(f)
                break;
             }
        }
    }
    return 0;
}

