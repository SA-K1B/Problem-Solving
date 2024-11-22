#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    vector <int> v(n+1);
    for(int i=0;i<n;i++)
      cin>>v[i];
    int res = 0;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
          if(v[i]==v[j])
            res++;
       }
    }
    cout<<res<<endl;
    t--;
  }
}