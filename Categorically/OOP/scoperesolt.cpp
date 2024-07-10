#include<bits/stdc++.h>
using namespace std;
class nw{
   private:
      int a,b,c;
   public:
    nw(int x,int y);
    void print();

};
nw::nw(int x,int y){
   a=x;
   b=y;
}
void nw::print(){
  c=a*b;
  cout<<c<<endl;
}
int main()
{
  nw obj(6,9);
  obj.print();
}
