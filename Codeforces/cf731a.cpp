#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
    char s[105];
    cin>>s;
    int len=strlen(s);
    char ch=s[0];
    int sum=0;
    if(ch-'a'>13){
        sum+=(26-(ch-'a'));
    }
    else sum+=(ch-'a');
    int d1,x,y,j=1;
    while(j<len){
        char ch2=s[j];
        if(ch2>=ch)
         d1=ch2-ch;
        else  d1=ch-ch2;
        //cout<<d1<<endl;
        if((ch-'a')>13){
             x=26-(ch-'a');
             //cout<<x<<endl;
        }
        else  x=ch-'a';
                //cout<<x<<endl;
         if((ch2-'a')>13){
             y=26-(ch2-'a');
             //cout<<y<<endl;
         }
        else  y=ch2-'a';
         // cout<<y<<endl;
        int d2=x+y;
        //cout<<d2<<endl;
        //if(ch>23)
        //int d2=(ch-)
        if(d1>=d2)
        sum+=d2;
        else sum+=d1;
        ch=s[j];
        j++;
    }
   cout<<sum<<endl;
    return 0;


}
