#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    string s1;
    cin>>s1;
    int sz=s1.size();
    int p=0;
    while(p<sz){
        if(s1[p]=='.'){
        cout<<"0";
        p+=1;
        }
        else if(s1[p]=='-'){
            if(s1[p+1]=='.'){
                cout<<"1";
                p+=2;
        }
        else{
            cout<<"2";
            p+=2;
        }
    }
}
    return 0;
}
