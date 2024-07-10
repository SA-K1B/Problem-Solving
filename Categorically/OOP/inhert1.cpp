#include<bits/stdc++.h>
using namespace std;
class par{
   private:
      int a;
   protected:
       int b;
   public:
    int c,d,e;
    par(){
    c=4;
    }
  // void set(){
    //a=c;
   //}
   void print(){
      cout<<c<<endl;
   }
};
class child:public par{
   int c;
   public:
    void set(){
     c=5;
    cout<<par::c<<' '<<c<<endl;                 //now in child class protect. and publ. members became private but in par class                          //they remain as they are.
   }
   void sum(){
     d=b+b;
   }
   void print(){
     cout<<d<<endl;
   }
};
int main()
{
    child c1;
    // obj1,obj2;
    //c1.c=5;
    //obj2.c=3;
    c1.set();
    //obj1.print();
  //  c1.sum();
//c1.print();
}
