#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    getchar();
   char s1[100005];
   gets(s1);
  // cout<<s1<<endl;
   int cn=0,i=0,cz=0;
   while(i<n){
        //cout<<s1[i]<<endl;
    if(s1[i]=='n')
        cn++;
    else if(s1[i]=='z')
        cz++;
        i++;
   }
  // cout<<cn<<' '<<cz<<endl;
   for(int j=1;j<=cn;j++){
    cout<<"1"<<' ';
   }
   for(int j=1;j<=cz;j++)
       cout<<"0"<<' ';
   return 0;
}
