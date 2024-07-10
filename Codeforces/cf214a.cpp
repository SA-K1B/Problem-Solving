#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            int x=i*i+j;
            int y=j*j+i;
            if(x==n&&y==m)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
