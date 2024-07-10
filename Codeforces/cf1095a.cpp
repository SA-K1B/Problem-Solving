#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    string s1,s2="";
    cin>>s1;
    int i=1;
    int j=0;
    while(j<n){
        s2+=s1[j];
        j+=i+1;
        i++;
    }
    cout<<s2<<endl;
    return 0;
}
