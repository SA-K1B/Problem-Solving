#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s1=0,s2=0;
        s2+=pow(2,n);
        for(int i=1;i<=(n/2-1);i++)
            s2+=pow(2,i);
        for(int i=n/2;i<=n-1;i++)
        s1+=pow(2,i);
        cout<<s2-s1<<endl;
    }
    return 0;

}
