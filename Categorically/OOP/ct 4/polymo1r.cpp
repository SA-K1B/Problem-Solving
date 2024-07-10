#include<bits/stdc++.h>
using namespace std;
class base{
  public:
      virtual void fun(){
        cout<<"base"<<endl;
      }
};
class der1:public base{
   public:
       void fun(){
       cout<<"der 1"<<endl;
       }
       virtual void fun1(){
         cout<<"d1f2"<<endl;
       }
};
class der2:public der1{
     public:
};
class der3:public der1{
     public:
      void fun1(){
         cout<<"d1f2"<<endl;
       }
};
int main(){
   base *ptr,b;
   der1 *ptr1,d1;
   der2 d2;
   der3 d3;
   ptr=&b;
   ptr->fun();
   ptr=&d1;
    ptr->fun();
    ptr=&d2;
   ptr->fun();
    ptr1=&d3;
   ptr1->fun1();
}
