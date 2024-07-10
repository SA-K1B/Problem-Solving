#include<bits/stdc++.h>
using namespace std;
class class2;
class class1{
   private:
       int a;
   public:
    class1(){
     a=3;
   }
  friend class class2;
};
class class2{
  private:
      int b;
   public:
   void fun(class1 x){
     b=a*7;
   }
};
int main()
{
   class1 c1;
   class2 c2;
   c2.fun(c1);
}
