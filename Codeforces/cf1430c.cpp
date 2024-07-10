#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,avg1;
      //  float avg2;
        cin>>n;
        cout<<2<<endl;
        for(int i=1;i<=n-1;i++){
          if(i==1){
            cout<<n<<' '<<n-1<<endl;
            avg1=(n+(n-1))/2;
            if((avg1*2)!=(n+(n-1)))
                avg1+=1;
          }
          else{
                int x=avg1;
           //     cout<<x<<endl;
            cout<<x<<' '<<n-i<<endl;
             avg1=(x+(n-i))/2;
           //  cout<<avg1<<endl;
            if((avg1*2)!=(x+(n-i)))
                avg1+=1;
          }
        }
   }
    return 0;
}
