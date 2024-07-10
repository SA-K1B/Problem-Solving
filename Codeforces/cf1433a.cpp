#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int x=n%10;
        while(n>0){
            int rem=n%10;
            cnt++;
            n/=10;
        }
        int sum=0;
        for(int j=cnt;j>=1;j--){
            sum+=j;
        }
        cout<<(x-1)*10+sum<<endl;
    }
    return 0;
}
