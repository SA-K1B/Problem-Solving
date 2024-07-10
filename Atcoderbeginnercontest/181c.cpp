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
   // ios_base::sync_with_stdio(false);
  //  cin.tie(NULL);
    int i,n,f=0;
    cin>>n;
    map <int,int> mx;
    map <int,int> my;
    map <int,int> ms;
    map <int,int> md;
    for( i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        mx[x]++;
        my[y]++;
        ms[x+y]++;
        md[x-y]++;
    }
    //cout<<i<<endl;
    for(auto it:mx){
       if(it.second>=3){
     //   cout<<"g"<<endl;
        f=1;
        break;
       }
    }
    if(!f){
         for(auto it:my){
       if(it.second>=3){
       //  cout<<"g"<<endl;
        f=1;
        break;
       }
    }
    if(!f){
         for(auto it:ms){
       if(it.second>=3){
        //  cout<<"g"<<endl;

        f=1;
        break;
         }
       }
       if(!f){
         for(auto it:md){
       if(it.second>=3){
        //  cout<<"g"<<endl;
        f=1;
        break;
         }
       }
       if(!f)
           cout<<"No"<<endl;
       else cout<<"Yes"<<endl;
    }
       else cout<<"Yes"<<endl;
 }
    else cout<<"Yes"<<endl;
}
  else cout<<"Yes"<<endl;
    return 0;
}

