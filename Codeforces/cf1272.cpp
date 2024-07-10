#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);
        int x=a[2]-a[1];
        int b=a[1]-a[0];
        int c=x+b;
        if(c<=2){
            cout<<"0"<<endl;
            continue;
        }
        c-=2;
        long long ans=(long long)c*2;
        cout<<ans<<endl;
    }
    return 0;

}
