#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int x=k;
    int cnt=1;
    while(1){
        if(x%10==0||(x%10==r)){
            cout<<cnt<<endl;
            return 0;
        }
         x=k*(cnt+1);
       /* if(x%10==0||x%10==r){
            cout<<cnt+1<<endl;
            return 0;
        }*/
        cnt++;
    }
      return 0;
}
