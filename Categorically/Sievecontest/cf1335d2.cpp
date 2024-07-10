#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    char s[10][10];
    cin>>t;
   // getchar();
    while(t--){
        char s[10][10];
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++)
                cin>>s[i][j];
        }
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
                if(s[i][j]=='2'){
                   s[i][j]='1';
                   break;
                }
            }
        }
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
              cout<<s[i][j];
            }
            cout<<endl;
        }
  }
    return 0;
}
