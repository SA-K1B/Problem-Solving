#include<bits/stdc++.h>
using namespace std;
int bs(int b[],int n,int k){
  int m,s=0;
  int e=n-1;
  while(s<=e){
    m=(s+e)/2;
    if(b[m]==k)
        return m;
    else if(k>b[m])
         s=m+1;
    else e=m-1;
  }
  return m;
}
int main()
{
    //freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    int a[n],b[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        b[i]=sum;
    }
    int q;
    cin>>q;
    int qu[q];
    for(int i=0;i<q;i++)
        cin>>qu[i];
    for(int j=0;j<q;j++){
        int x=bs(b,n,qu[j]);
        if(b[x]>=qu[j])
            cout<<x+1<<endl;
        else
            cout<<x+2<<endl;
    }
    return 0;
}
