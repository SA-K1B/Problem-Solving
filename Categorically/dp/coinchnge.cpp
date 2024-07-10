#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,5,10,20,100};
    int n;
    cin>>n;
    /*if(n<5){
        cout<<n<<endl;
        return 0;
    }*/
    int x=n,ans=0;
    int i=4;
    while(x){
        /*if(x<5){
            ans+=x;
            break;
        }*/
        if(x>=a[i]){
           x=x-a[i];
           //cout<<x<<endl;
           ans++;
        }

        else{
            i--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
