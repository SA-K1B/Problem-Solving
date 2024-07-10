#include<bits/stdc++.h>
#define db double
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int hr,m;
    cin>>hr>>m;
    int h,d,c,n,x,y,tm;
    cin>>h>>d>>c>>n;
    if(hr<20){
        x=20-hr;
     if(m>0){
            x--;
            y=60-m;
            tm=(x*60)+y;
        }
        else{
            tm=x*60;
        }
    }
    else{
        tm=0;
    }
    db inc=(db)tm*d*1.0;
    //cout<<inc<<endl;
    db tp=h+inc;
    db buns=ceil(tp/n);
    db dis=c-(c*(20.0/100.0));
    db rbl=buns*dis;
              //  cout<<rbl<<endl;
    db buns2=ceil((db)h/n);
       // cout<<buns2<<endl;
    db rbl2=buns2*c;
          //  cout<<rbl2<<endl;
    db ans=min(rbl,rbl2);
    printf("%.4lf\n",ans);
    return 0;
}
