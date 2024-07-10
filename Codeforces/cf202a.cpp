#include<bits/stdC++.h>
using namespace std;
int main()
{
    char s[11];
    cin>>s;
    int len=strlen(s);
    sort(s,s+len);
    char ch=s[len-1];
    int j=len-1;
    while(j>=0){
        if(s[j]==ch)
            cout<<ch;
        else break;
        j--;
    }
    return 0;
}
