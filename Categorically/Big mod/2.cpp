#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   while(cin>>n){
    int o=2;
    int x=11%n;
    while(x%n!=0){
        o++;
        x=((x*10)+1)%n;
    }
    cout<<o<<endl;
   }
    return 0;
}
