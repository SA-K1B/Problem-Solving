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
    ll t,n;
    cin>>t;
    while(t--){
        string s1;
        cin>>n>>s1;
        string sn="2020",s2="",s3="";
        ll j=0;
        while(j<4){
            s2+=s1[j];
            j++;
        }
         j=n-4;
         while(j<n){
            s3+=s1[j];
            j++;
        }
        if(sn==s2||sn==s3)
            cout<<"YES"<<endl;
        else{
            if(s1[0]=='2'&&s1[1]=='0'&&s1[n-2]=='2'&&s1[n-1]=='0'){
                    cout<<"YES"<<endl;
            }
           else if(s1[0]=='2'&&s1[1]=='0'&&s1[2]=='2'&&s1[n-1]=='0'){
                    cout<<"YES"<<endl;
            }
            else if(s1[0]=='2'&&s1[n-3]=='0'&&s1[n-2]=='2'&&s1[n-1]=='0'){
                    cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

