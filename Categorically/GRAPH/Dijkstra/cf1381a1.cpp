#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t,n;
    char a[1005],b[1005];
    int r[100000];
    cin>>t;
    while(t--){
        cin>>n;
        getchar();
       // cout<<n<<endl;
        gets(a);
       // cout<<a<<endl;
        gets(b);
       // cout<<b<<end
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                r[cnt++]=i;
            }
        }
        char l=a[n-1];
        for(int j=n-1;j>=0;j--){
            if(l!=b[j]){
                l=b[j];
                r[cnt++]=j;
            }
        }
        cout<<cnt<<' ';
        for(int i=0;i<cnt;i++)
            cout<<r[i]+1<<' ';
            cout<<"\n";
  }
  return 0;
}
