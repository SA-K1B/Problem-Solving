#include<bits/stdc++.h>
using namespace std;
class class2;
class class1{
   private:
       int a;
   public:
    class1(){
     cin>>a;
   }
  friend int sum(class1 x,class2 y);
};
class class2{
  private:
      int b;
   public:
    class2(){
     cin>>b;
   }
     friend int sum(class1 x,class2 y);
};
int sum(class1 x,class2 y){
  return x.a+y.b;
}
int main()
{
   class1 c1;
   class2 c2;
   cout<<sum(c1,c2);
}
