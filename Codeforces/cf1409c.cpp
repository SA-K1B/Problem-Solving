#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        for(int i=1;;i++){
            int d=y-x;
            int el=d/i-1;
            if(el+2==n){
                while(n--){
                    cout<<x<<' ';
                    x+=i;
                }
            }
        }
    }
}
