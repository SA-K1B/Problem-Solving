#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        string s1,s2="";
        int n;
        cin>>n;
        cin>>s1;
        char ch=s1[n-1];
        int j=0;
        while(j<n){
            s2+=ch;
            j++;
        }
        cout<<s2<<endl;
    }
    return 0;
}
