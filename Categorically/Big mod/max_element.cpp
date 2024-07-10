#include<bits/stdc++.h>
using namespace std;
int findmx(int a[],int mx,int i,int n){
   if(i==n)
    return mx;
   if(a[i]>mx)
    return findmx(a,a[i],i+1,n);
   else return findmx(a,mx,i+1,n);
}
int main()
{
  int a[1000],n;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  int mx=findmx(a,-1000000000,0,n);
  cout<<mx<<endl;
}
