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
    ll n;
    cin>>n;
    if(n%3!=0){
        if(n<=11){
            cout<<-1<<endl;
            return 0;
        }
    }
    ll sum=0,cnt=0,c1=0,c2=0,x=n;
    while(x>0){
        cnt++;
        ll rem=x%10;
        if(rem%3==1)
            c1++;
       else if(rem%3==2)
            c2++;
        sum+=rem;
        x/=10;
    }
    if(sum%3==0)
        cout<<"0"<<endl;
    else if(sum%3==1){
        if(c1>0)
            cout<<"1"<<endl;
        else {
                if(cnt<3)
                  cout<<-1<<endl;
                else cout<<"2"<<endl;
        }
    }
    else{
         if(c2>0)
            cout<<"1"<<endl;
        else {
                 if(cnt<3)
                  cout<<-1<<endl;
                else cout<<"2"<<endl;
        }
    }
    return 0;
}

