#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    Student(const string& studentName, int studentAge) : name(studentName), age(studentAge) {
        cout << "Constructor called for student: " << name << endl;
    }

    ~Student() {
        std::cout << "Destructor called for student: " << name << std::endl;
    }
void displayDetails() const {
        cout << "Student Name: " << name << ", Age: " << age << " years" << endl;
    }
};

int main() {
    Student student1("John Doe", 20);
student1.displayDetails();
Student student2("Jane Smith", 22);
student2.displayDetails();
return 0;
}
