#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<"1"<<endl;
        return 0;
    }
    else if(n==1){
        cout<<"8"<<endl;
        return 0;
    }
    int r=n%4;
    if(r==0)
        cout<<"6"<<endl;
    else if(r==1)
        cout<<"8"<<endl;
    else if(r==2)
        cout<<"4"<<endl;
    else{
        cout<<2<<endl;
    }
    return 0;
}

