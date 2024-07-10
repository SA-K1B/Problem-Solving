#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
         int f1=0,zero=0,cnt=0;
         for(int i=0;i<n;i++){
            if(a[i]==1&&f1==0){
                f1=1;
            }
            else if(a[i]==0&&f1==1){
                zero++;
            }
            else if(a[i]==1&&f1==1){
                cnt+=zero;
                zero=0;
            }
         }
         cout<<cnt<<endl;
    }
    return 0;
}
