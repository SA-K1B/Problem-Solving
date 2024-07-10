#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n&1){
        cout<<"-1"<<endl;
        return 0;
    }
    int i,j;
    for(i=2,j=1;i<=n;i+=2,j+=2)
        cout<<i<<' '<<j<<' ';
}
