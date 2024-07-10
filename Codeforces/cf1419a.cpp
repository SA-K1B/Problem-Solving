#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t,f,j;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2){
            f=0;
            j=0;
            while(j<n){
                int num=s[j]+'0';
                 if(num%2){
                    cout<<"1"<<endl;
                    f=1;
                    break;
                 }
                 else{
                    j+=2;
                 }
            }
          if(!f)
            cout<<"2"<<endl;
        }
        else{
                f=0;
                j=1;
            while(j<n){
                int num=s[j]+'0';
                 if(num%2==0){
                    cout<<"2"<<endl;
                    f=1;
                    break;
                 }
                 else{
                    j+=2;
                 }
            }
          if(!f)
            cout<<"1"<<endl;
        }
    }
    return 0;
}
