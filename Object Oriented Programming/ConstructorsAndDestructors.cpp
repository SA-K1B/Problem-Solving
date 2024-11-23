#include<iostream>
using namespace std;
class Student{
public:
	int id;
	string name;
	Student(int id,string name){
		this->name = name;			//this refers to the current obj that is 			
		this->id = id;			//invoking the function 
	}
	~Student(){
		cout<<"Destructor called"<<endl;
	}
};
int main(){
	// // method 1
	// // using stack
	// Student s1;
	// s1.id = 1;
	// s1.name = "Alice";
	// cout<<s1.id<<' '<<s1.name<<endl;
	// //method 2
	// //using heap
	// Student *s2 = new Student();
	// s2->id = 2;
	// s2->name = "Bob";
	// cout<<s2->id<<' '<<s2->name<<endl;
	//using constructor
	Student s3(3,"Charles");
	cout<<s3.id<<' '<<s3.name<<endl;
	return 0;
}