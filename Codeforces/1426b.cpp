#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,n,m,f=0;
        cin>>n>>m;
        while(n--){
            cin>>a>>b>>c>>d;
            if(b==c)
                f=1;
        }
        if(m%2){
            cout<<"NO"<<endl;
        }
        else{
            if(f)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
