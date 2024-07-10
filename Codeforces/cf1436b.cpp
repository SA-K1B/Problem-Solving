#include<bits/stdc++.h>
using namespace std;
bool primecheck(int num){
    int fl=0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            fl=1;
           break;
        }
    }
  if(fl)
    return false;
  else return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,y;
        cin>>n;
        int f=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                f=1;
                break;
            }
        }
        if(f==0){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    cout<<"1"<<' ';
                }
                cout<<"\n";
            }
        }
        else{
            int k;
            for(k=n+1;;k++){
                f=0;
                for(int i=2;i*i<=k;i++){
                    if(k%i==0){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                     y=k-(n-1);
                  if(!primecheck(y))
                    break;
                   }
                }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==i)
                    cout<<y<<' ';
                else cout<<"1"<<' ';
            }
            cout<<"\n";
          }
        }
    }
    return 0;
}
