#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //  freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    if(a==b){
        if(x>=y){
            ll d1=b-y;
            if(d1>=n){
                b-=n;
                cout<<a*b<<endl;
                continue;
            }
            else{
                 b-=d1;
                 n-=d1;
                 a-=(a-x);
                 cout<<a*b<<endl;
            }

        }


    }



    }
