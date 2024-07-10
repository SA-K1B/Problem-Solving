#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int l,r;
    cin>>l>>r;
    int a=r+1;
    float div=(float)a/2;
    float l2=float(l);
    if(l2>=div)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
