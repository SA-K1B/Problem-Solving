#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
     int n;
    cin>>n;
    string s1;
    cin>>s1;
    if(n>26){
        cout<<"-1"<<endl;
        return 0;
    }
        /*if(n==1){
            cout<<"1"<<' '<<"1"<<endl;
            return 0;
        }*/
    sort(s1.begin(),s1.end());
    int mx=-1,cnt=1,dc=1;
    char cur=s1[0];
    for(int i=1;i<n;i++){
        if(cur==s1[i]){
            cnt++;
        }
        else{
            dc++;
            cnt=1;
            cur=s1[i];
        }
        mx=max(mx,cnt);
    }
    cout<<n-dc<<endl;
    return 0;
}

