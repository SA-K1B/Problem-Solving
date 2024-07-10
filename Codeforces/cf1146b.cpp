#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    string s1,s2="";
    cin>>s1;
    int i,j;
    int SIZE1=s1.size();
    j=0;
    while(j<SIZE1){
        if(s1[j]!='a')
        s2+=s1[j];
        j++;
    }
    int SIZE2=s2.size();
    if(SIZE2==0){
        cout<<s1<<endl;
        return 0;
    }
    if(SIZE2&1){
        cout<<":("<<endl;
        return 0;
    }
    int m=SIZE2/2;
     i=0;
     j=m;
     int f=0;
    while(j<SIZE2){
        if(s2[i]!=s2[j]){
            f=1;
            break;
        }
        i++;
        j++;
    }
    if(f){
        cout<<":("<<endl;
    }
    else{
         f=0;
         i=SIZE1-m;
         j=m;
        while(i<SIZE1&&j<SIZE2){
        if(s1[i]!=s2[j]){
            f=1;
            break;
        }
        i++;
        j++;
    }
      if(f)
      cout<<":("<<endl;
      else {
        j=0;
        while(j<(SIZE1-m)){
            cout<<s1[j];
            j++;
        }
        cout<<"\n";
      }
  }
  return 0;
}
