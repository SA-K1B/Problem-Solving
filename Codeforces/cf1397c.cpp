#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("i.txt","r",stdin);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"1"<<' '<<"1"<<endl;
    cout<<-1*a[0]<<endl;
    if(n==1){
        cout<<"1"<<' '<<n<<endl;
        cout<<0<<endl;
         cout<<"1"<<' '<<n<<endl;
        cout<<0<<endl;
        return 0;
    }
    cout<<"2"<<' '<<n<<endl;
    for(ll i=1;i<n;i++){
        ll add=(a[i]%n)*(n-1);
        cout<<add<<' ';
        a[i]+=add;
    }
    cout<<"\n"<<"1"<<' '<<n<<endl;
    cout<<"0"<<' ';
    for(ll i=1;i<n;i++){
        cout<<-1*a[i]<<' ';
    }
     return 0;
}
