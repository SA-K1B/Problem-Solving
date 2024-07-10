#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        string s1="";
        int n,k;
        cin>>n>>k;
        if(n%k==0){
        int j=0,i=1;
        while(j<n){
            if(i%k==0)
                s1+=('a'+k-1);
            else  s1+=('a'+(i%k)-1);
            j++;
            i++;
        }
    }
    else{
        int x=n/k;
        int y=x*k;
        int z=n-y;
        int j=0,i=1;
        while(j<y){
            if(i%k==0)
                s1+=('a'+k-1);
            else  s1+=('a'+(i%k)-1);
            j++;
            i++;
        }
        while(j<n){
            s1+='a';
            j++;
        }
    }
     cout<<s1<<endl;
  }
    return 0;
}
