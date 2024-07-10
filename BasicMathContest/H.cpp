#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 //   freopen("i.txt","r",stdin);
    int x,y;
    double m,n;
    cin>>x>>y;
    if(x==y)
        cout<<"="<<endl;
    else{
        m=(double)y*log(x);
        n=(double)x*log(y);
        if(m==n)
            cout<<"="<<endl;
        else if(m>n)
            cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    return 0;
}
