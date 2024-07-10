#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //  freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int cost=0;
    for(int i=0;i<n-1;i+=2){
        int j=i+1;
        cost+=a[j]-a[i];
    }
    cout<<cost<<endl;
}
