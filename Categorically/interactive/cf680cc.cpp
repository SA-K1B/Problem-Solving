#include<bits/stdc++.h>
using namespace std;
int main()
{
   int cnt=0,f=0;
  for(int i=2;i<=9;i++){
    printf("%d\n",i);
    fflush(stdout);
    char s[10];
    scanf("%s",s);
    if(s[0]=='y'||s[0]=='Y')
    cnt++;
    int k=i*i;
     printf("%d\n",k);
    fflush(stdout);
    char s1[10];
    scanf("%s",s1);
    if(s1[0]=='y'||s1[0]=='Y')
    cnt++;
    if(cnt>=2){
     f=1;
     break;
    }
  }
   if(f){
     printf("composite\n");
     fflush(stdout);
  }
   else{
    printf("prime\n");
    fflush(stdout);
   }
   return 0;
}
