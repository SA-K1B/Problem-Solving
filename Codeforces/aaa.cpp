#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sq=sqrt(n);
        if(sq*sq==n){
            cout<<(sq-1)*2<<endl;
        }
        else{
            if(sq*(sq+1)>=n){
                cout<<sq-1+sq<<endl;
            }
            else{
                cout<<sq*2<<endl;
            }
        }
    }
    return 0;
}
