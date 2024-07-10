#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t,a[3];
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++)
            cin>>a[i];
        int n;
        cin>>n;
        sort(a,a+3);
        int x1=a[2]-a[0];
        n-=x1;
        int x2=a[2]-a[1];
        n-=x2;
        if(n<0)
            cout<<"NO"<<endl;
        else if(n%3==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
