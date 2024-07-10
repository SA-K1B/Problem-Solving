#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<3){
        cout<<x<<endl;
    }
    else if(x%2){
        cout<<"0"<<endl;
    }
    else{
        int ans=0;
        while(x%2==0){
                ans+=2;
                x/=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
