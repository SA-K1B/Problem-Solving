#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    string s1;
    cin>>s1;
    int i,j,cnt=0;
    int SIZE1=s1.size();
    j=0;
    while(j<SIZE1){
        if(s1[j]=='a')
        cnt++;
        j++;
    }
    int na=SIZE1-cnt;
    int r=na-cnt;
    if(r<0){
        cout<<SIZE1<<endl;
    }
    else{
        cout<<SIZE1-(r+1)<<endl;
    }
    return 0;

}
