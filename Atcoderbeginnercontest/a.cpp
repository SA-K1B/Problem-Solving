#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],i,j;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            cin>>a[i][j];
        }
    }
            int s1=a[1][1]*a[2][2];
            int s2=a[1][2]*a[2][1];
            cout<<s1-s2<<endl;
}
