#include<bits/stdc++.h>
using namespace std;
map <char,char> mp;
int main()
{
    freopen("i.txt","r",stdin);
    string s1;
    char c1,c2;
    int t;
    cin>>t;
    while(t--){
        string s2="",s3="";
        int n,f=0;
        cin>>n;
        while(n--){
            cin>>c1>>c2;
            mp[c1]=c2;
       }
        cin>>s1;
        cout<<s1<<endl;
        int j=0;
        while(s1[j]!='\0'){
                if(f==1){
          if(mp[s1[j]]!=0)
             s3+=mp[s1[j]];
         else  s3+=s1[j];
        }
        else {if(mp[s1[j]]!=0)
             s2+=mp[s1[j]];
         else  s2+=s1[j];
         if(s2[j]=='.'){
            s2[j]='\0';
            f=1;
         }
      }
         j++;
    }
    if(f){
        string s5,s4;
        long long num2;
        double num;
        cout<<s2<<' '<<s3<<endl;
        stringstream g(s2);
        g>>num2;
        cout<<num2<<endl;
        stringstream ss;
       // ss<<num2;
        ss>>s5;
        //cout<<s3<<endl;
        stringstream g1(s3);
        g1>>num;
        cout<<num<<endl;
        stringstream ss1;
        ss1<<num;
        ss1>>s4;
        int j=0;
        s5+='.';
        while(s4[j]!='\0'){
            s5+=s4[j];
            j++;
        }
       // cout<<s5<<endl;
    }
     /*j=0;
    while(s2[j]!='\0'){
        cout<<s2[j];
        j++;
    }*/
   else{
    cout<<s2<<endl;
  double x;
  stringstream g(s2);
  g>>x;
  string s3;
  stringstream g1;
  g1<<x;
  g1>>s3;
  if(s3[1]=='.'&&s3[0]=='0'){
    int j=1;
    while(s3[j]!='\0'){
        cout<<s3[j];
        j++;
    }
}
    else cout<<x<<endl;
    mp.clear();
   }
}
  return 0;
}
