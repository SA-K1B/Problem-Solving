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
    ll t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        stack <char> st;
        ll sz=s1.size();
        ll j=0;
        while(j<sz){
            char ch=s1[j];
            st.push(ch);
            j++;
        }
        ll cb=0,ca=0,ans=0;
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            if(ch=='A'){
                if(cb==0){
                    ans++;
                }
                else{
                    cb--;
                }
            }
            else{
                cb++;
            }
        }
        ans+=(cb%2);
        cout<<ans<<endl;
    }
    return 0;
}
