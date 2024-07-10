#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    for(int i=1;i<=n+1;i++){
        for(int sp=1;sp<=(n+1-i)*2;sp++)
            cout<<' ';
            int put=0;
        for(int j=1;j<=i;j++){
               if(j==i)
               cout<<put;
           else  cout<<put<<' ';
            put++;
        }
        put-=2;
        for(int j=1;j<=i-1;j++){
             if(j==1)
                    cout<<' ';
            if(j==i-1)
            cout<<put;
           else {
                cout<<put<<' ';
           }
            put--;
        }
        cout<<"\n";
    }
        for(int i=n;i>=1;i--){
            for(int sp=1;sp<=(n+1-i)*2;sp++)
            cout<<' ';
             int put=0;
        for(int j=1;j<=i;j++){
                if(j==i)
            cout<<put;
           else  cout<<put<<' ';
            put++;
        }
        put-=2;
        for(int j=1;j<=i-1;j++){
             if(j==1)
                    cout<<' ';
            if(j==i-1)
            cout<<put;
           else  cout<<put<<' ';
            put--;
        }
        cout<<"\n";
      }
    return 0;
}
