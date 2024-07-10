#include<bits/stdc++.h>
using namespace std;
class new1{
   int a,b;
   double c;
   public:
       void fun(int x,int y,double z){
       a=x;
       b=y;
       c=z;
       }
       void show(){
       cout<<a<<' '<<b<<' '<<c<<endl;
       }
};
int main()
{
    new1 obj;
    obj.fun(4,6,9.78);
    obj.show();
}
