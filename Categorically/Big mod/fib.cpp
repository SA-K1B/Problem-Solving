#include<bits/stdc++.h>
using namespace std;
int fib(int i,int a,int b,int n){
   if(i==n)
      return a+b;
   return fib(i+1,b,a+b,n);
}
int main()
{
   int n;
   cin>>n;
   if(n==1){
    cout<<"1"<<endl;
    return 0;
   }
   int ans=fib(2,0,1,n);
   cout<<ans<<endl;
}
