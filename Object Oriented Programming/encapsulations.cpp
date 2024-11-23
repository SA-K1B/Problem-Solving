#include<iostream>
using namespace std;
class Student{
private:
	int id;
	string name;
public:
	void setId(int id){
		this->id=id;
	}
	void setName(string name){
		this->name=name;
	}
	string getName(){
		// cout<<"\n"<<"From the class"<<this->name<<endl;
		return this->name;
	}
};

int main(){
	Student s1;
	s1.setId(1);
	s1.setName("Sakib");
	// cout<<s1.name<<endl;
	cout<<"From main "<<s1.getName()<<endl;
}