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
        ll p,q;
        cin>>p>>q;
        ll newq=q;
        if(p%q!=0){
            cout<<p<<endl;
            continue;
        }
        set <ll> div;
        ll i=2;
        while(q%i==0&&q>0){
            q/=i;
            div.insert(i);
        }
        for(ll i=3;i*i<=q;i+=2){
            if(q%i==0){
            while(q%i==0&&&q>0){
            q/=i;
            div.insert(i);
        }
    }
  }
     if(q>1)
        div.insert(q);
    ll ans=Min;
     for(auto it:div){
        ll temp=p;
        while(temp%it==0&&temp>0){
          //  cout<<it<<endl;
            temp/=it;
            if(temp%newq!=0){
             //   cout<<temp<<endl;
                ans=max(ans,temp);
                break;
            }
        }
     }
     cout<<ans<<endl;

}
    return 0;
}

