#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<3){
            cout<<1<<endl;
        }
       else {
            int low=3,floor=2;
            int up=x+2;
            while(1){
                if(n>=low&&n<=up){
                    cout<<floor<<endl;
                    break;
                }
                floor++;
                up+=x;
                low+=x;
            }
         //    cout<<floor<<endl;
       }
   }
   return 0;
}
