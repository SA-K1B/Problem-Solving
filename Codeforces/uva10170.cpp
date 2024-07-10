#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
  //  freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ll n,s,d;
    while(cin>>s>>d){
    ll members=s;
    ll mn=1,mx=s;
    while(1){
        if(d>=mn&&d<=mx){
            cout<<members<<endl;
            break;
        }
        mn+=members;
        mx+=members+1;
        members++;
     }
  }
   return 0;
}

