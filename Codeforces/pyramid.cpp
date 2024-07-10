#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=rows;i>=1;i--){
        for(int spc=1;spc<=rows-i;spc++){
            cout<<" ";
        }
        for(int j=1;j<=2*rows-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

