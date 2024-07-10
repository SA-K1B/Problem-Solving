#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,k,rem,x;
        cin>>n>>k;
        getchar();
        string s1;
        cin>>s1;
         int j=0,cnt=0;
         int sz=s1.size();
         while(j<sz){
            if(s1[j]=='1')
            cnt++;
            j++;
         }
        if(n%(k+1)==0){
          x=n/(k+1);
         cout<<x-cnt<<endl;
       }
       else{
            if(cnt==0){
                cout<<(n/(k+1))+1<<endl;
                continue;
            }
         rem=n%(k+1);
          x=n/(k+1)+1;
         if(x==cnt)
            cout<<"0"<<endl;
         else{
            int f=0,j=0,i=n-rem;
            while(j<rem&&i<n){
                if(s1[j]=='1'||s1[i]=='1'){
                    f=1;
                    break;
                }
                j++;
                i++;
            }
            if(f)
                cout<<x-cnt<<endl;
            else cout<<x-cnt-1<<endl;
         }
       }
    }
     return 0;
}
