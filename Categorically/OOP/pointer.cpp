#include<bits/stdc++.h>
using namespace std;
class clss1{
   private:
       int a;
   public:
       int b;
   void seta(int x){
     a=b+x;
   }
   void print(){
     cout<<a<<endl;
   }
};
int main()
{
   clss1 obj;
   clss1 *ptr1;
   int clss1::*ptr2;
   ptr2=&clss1::b;
   ptr1=&obj;
   (*ptr1).*ptr2=6;
   (*ptr1).seta(2);
   ptr1->print();
}
