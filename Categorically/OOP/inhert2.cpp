#include<bits/stdc++.h>
using namespace std;
class newclass{
   private:
       int x;
   public:
    newclass(){
       cout<<"No value for x"<<endl;
       }
    newclass(int x){
      newclass::x=x+x;
      cout<<"val of x="<<this->x<<endl;
    }
    ~newclass(){
    cout<<"base 1"<<endl;
    }
};
class child:public newclass{

   public:
      child(int y){
        cout<<"val of y="<<y<<endl;
      }
      child(int m,int n):newclass(n){
        cout<<"val of m,n="<<' '<<m<<' '<<n<<endl;
      }
      ~child(){
      cout<<"c1"<<endl;
      }
};
int main()
{
    child c1(7,9),c2(1);
  // newclass obj(6);
  // obj.print();
    return 0;
}
