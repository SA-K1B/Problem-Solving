#include<bits/stdc++.h>
using namespace std;
int col[10005];
int main()
{
    int n,c;
    cin>>n;
    col[1]=1;
    int mx=1;
    for(int i=2;i*2<=n;i++){
            if(col[i]==0)
                col[i]=2;
                c=col[i];
        for(int j=2;i*j<=n;j++){
            col[i*j]=c+1;
            if(c+1>mx)
                mx=c+1;
        }
    }
    if(n==2||n==3)
        cout<<"2"<<endl;
   else  cout<<mx<<endl;
    for(int i=1;i<=n;i++){
        if(col[i]==0)
        cout<<"2"<<' ';
        else cout<<col[i]<<' ';
    }
    return 0;
}
