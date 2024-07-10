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
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
       // sort(a.begin(),a.end());
       // sort(b.begin(),b.end());
       // cout<<a<<' '<<b<<endl;
        int cr=0,cb=0;
        for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            cr++;
        }
        else if(a[i]<b[i]){
            cb++;
        }
      }
     // cout<<cr<<' '<<cb<<endl;
      if(cr>cb)
        cout<<"RED"<<endl;
       else if(cr<cb)
        cout<<"BLUE"<<endl;
        else cout<<"EQUAL"<<endl;
    }
    return 0;
}
