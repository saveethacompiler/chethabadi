#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    Student(const string& studentName, int studentAge) : name(studentName), age(studentAge) {
     
        cout << "Constructor called for " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student student1("John Doe", 21);
    student1.display();
 return 0;
}
