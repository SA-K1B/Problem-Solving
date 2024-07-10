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
    freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s1;
    cin>>s1;
    vector <pair<char,int> > v;
    ll sz=s1.size();
    ll j=0;
    while(j<sz){
        char ch=s1[j];
        if(v.empty()||v.back().first!=ch)
            v.pb({ch,1});
        else v.back().second++;
        j++;
    }
    ll ans;
    if(v.front().second>1){
    ans=v.front().second-1;
    }
    else ans=1;
    string s2="";
    s2+=v.front().first;
    ll f=0;
    for(ll i=1;i<v.size();i++){
        if(f){
            s2+=v[i].first;
            f=0;
        }
        else{
            if(v[i].second==1){
                s2+=v[i].first;
                f=1;
            }
            else{
                s2+=v[i].first;
                s2+=v[i].first;
            }
        }
    }
    ll sz2=s2.size();
   // cout<<s2<<endl;
    if(sz2==0||sz2%2==0){
    cout<<n-sz2<<endl;
    cout<<s2<<endl;
    }
    else {
        cout<<n-sz2+1<<endl;
        s2[sz2-1]='\0';
        ll j=0;
        while(j<sz2-1){
            cout<<s2[j];
            j++;
        }
    }
    return 0;
}


