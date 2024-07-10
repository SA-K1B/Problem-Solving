#include<bits/stdc++.h>
using namespace std;
class student{
int id;
int cnt;
double cgpa;
public:
    void init()
    {
        cin>>id;
        cnt=0;
        cgpa=0;
    }
    void show()
    {
        cout<<ID<<" "<<cgpa<<endl;
    }
    void update_cgpa(double new_cgpa)
    {
        double ttl_cgpa=cnt*cgpa;
        ttl_cgpa+=new_cgpa;
        cnt++;
        cgpa=ttl_cgpa/cnt;
    }
};
int main()
{
    student obj;
    obj.init();
    obj.update_cgpa(4.00);
    obj.update_cgpa(3.65);
    obj.update_cgpa(3.98);
    obj.update_cgpa(2.56);
    obj.show();

}
