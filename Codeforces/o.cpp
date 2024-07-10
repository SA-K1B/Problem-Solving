#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    ll n,r,nxt,t;
    cin>>t;
    while(t--){
    cin>>n>>r;
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
  //  cout<<s<<endl;
    ll j=0,sum=0;
    ll sz=s.size();
    //cout<<sz<<endl;
    while(j<sz){
        sum+=s[j]-'0';
        j++;
    }
     ll frst=s[0]-'0';
    if(sum<=r){
        cout<<"0"<<endl;
        continue;
    }
    else if(r<=frst){
      nxt=ceil(pow(10,sz));
      cout<<nxt-n<<endl;
      continue;
    }
    else{
         string s1="";
         ll r2=r-frst;
         j=1;
         ll sz2=sz-1;
          frst=s[j]-'0';
         while(1){
            // cout<<r2<<' '<<frst<<endl;
            if(r2<=frst&&frst!=0){
           //  cout<<sz2<<endl;
              nxt=ceil(pow(10,sz2));
           //   cout<<nxt<<endl;
                while(j<sz){
                    s1+=s[j];
                    j++;
                }
            ll y;
            stringstream g(s1);
            g>>y;
            ll y2=nxt-y;
            cout<<y2<<endl;
            break;
         }
         r2-=s[j];
         j++;
         frst=s[j]-'0';
         sz2--;
      }
   }
}
   return 0;
}
