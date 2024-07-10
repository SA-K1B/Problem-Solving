#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r){
    int ans;
  if(r==0||r==n)
       return 1;
  else return ans=ncr(n-1,r-1)+ncr(n-1,r);
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans=ncr(n,r);
    cout<<ans<<endl;
}
