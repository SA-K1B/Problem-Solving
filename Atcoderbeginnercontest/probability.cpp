#include<bits/stdc++.h>
#define ll long long
#define db double
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
   double a,b,c,x,y,z,s=0.0;
   cin>>a>>b;
   for(int i=0;i<41;i++){
    db x1=(a+i);
    db x2=(b+i);
    s+=(x1/x2);
   }
   cout<<s<<endl;
   return 0;
}
