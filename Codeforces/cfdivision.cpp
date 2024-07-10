#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<=k||n%k==0)
            cout<<n<<endl;
        else{
            int x=n/k;
            int y=k/2;
            int ans=((x+1)*y)+(x*(k-y));
            cout<<ans<<endl;
        }
    }
    return 0;
}
