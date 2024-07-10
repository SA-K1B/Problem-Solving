#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t,h=0;
    cin>>t;
    while(t--){
    if(h)
    cout<<endl;
    h=1;
    int n;
    cin>>n;
    int a[n];
    vector <int> v;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0;
    int j=n-1,f=0;
    while(i<=j){
    if(f==0){
     v.push_back(a[i]);
     i++;
     f=1;
    }
    else{
        v.push_back(a[j]);
        f=0;
        j--;
    }
  }
    int s=v.size();
    for(int i=0;i<s;i++){
        if(i!=s-1)
            cout<<v[i]<<' ';
        else cout<<v[i];
    }
    v.clear();
  }
}
