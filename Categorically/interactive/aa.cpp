#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[]={3,6,7,8};
   while(next_permutation(a,a+4)){
     for(int i=0;i<=3;i++)
       cout<<a[i]<<' ';
       cout<<endl;
   }
   for(int i=0;i<=3;i++)
       cout<<a[i]<<' ';
       cout<<endl;
}
