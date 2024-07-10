#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    string s1,s2="";
    cin>>s1;
    int sz=s1.size();
    int j=0;
    while(j<sz){
        s2+=s1[j];
        j++;
    }
    reverse(s1.begin(),s1.end());
    j=0;
    while(j<sz){
        s2+=s1[j];
        j++;
    }
    cout<<s2<<endl;
    return 0;
}

