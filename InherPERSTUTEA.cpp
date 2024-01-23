#include <iostream>
using namespace std;

class Person {
    char gender[10];
	int age;
	char name[100];

public:
	void set_p()
	{
	    cout << "Enter the Name:";
		cin >> name;
		cout << "Enter age:";
		cin >> age;
        cout << "Enter the gender(m/f):";
		cin >> gender;
	}

	void display_p()
	{
		cout << endl <<"name:: " <<name<<endl <<"age: "<< age << "gender: " << gender <<endl;
	}
};

class Student : private Person {
	char class_name[100];
	int roll_no;

public:
	void set_s()
	{
		set_p();
		cout << "Enter the class name:: ";
		cin >> class_name;
		cout << "Enter the roll no::";
		cin >> roll_no;
	}

	void display_s()
	{
		display_p();
		cout <<"Class name : "<< class_name << "\nroll number: " << roll_no << endl;
		cout<<endl;
	}
};
class Teacher : private Person {
	char subject[100];
	int salary;

public:
	void set_s()
	{
		set_p();
		cout << "Enter the subject name:: ";
		cin >> subject;
		cout << "Enter the salary::";
		cin >> salary;
	}

	void display_s()
	{
		display_p();
		cout <<"Subject name:: "<< subject << "\nsalary :  " << salary << endl;
		cout<<endl;
	}
};
int main()
{
    Student s;
    s.set_s();
	Teacher t;
	t.set_s();
	cout<<"student details::"<<endl;
	s.display_s();
	cout<<endl;
	cout<<"Teacher details::"<<endl;
	t.display_s();
	return 0;
}
