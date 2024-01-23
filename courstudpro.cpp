#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int studentId;

public:
    Student(const string& n, int a, int id) : Person(n, a), studentId(id) {}

    void displayDetails() const {
        Person::displayDetails();
        cout << "Student ID: " << studentId << endl;
    }
};

class Professor : public Person {
private:
    string department;

public:
    Professor(const string& n, int a, const string& dep) : Person(n, a), department(dep) {}

    void displayDetails() const {
        Person::displayDetails();
        cout << "Department: " << department << endl;
    }
};

class Course {
protected:
    string courseName;
    int courseId;

public:
    Course(const string& name, int id) : courseName(name), courseId(id) {}

    virtual void displayDetails() const {
        cout << "Course Name: " << courseName << endl;
        cout << "Course ID: " << courseId << endl;
    }

    virtual ~Course() = default; // Use default implementation
};

class ProgrammingCourse : public Course {
private:
    string programmingLanguage;

public:
    ProgrammingCourse(const string& name, int id, const string& lang)
        : Course(name, id), programmingLanguage(lang) {}

    void displayDetails() const override {
        Course::displayDetails();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

int main() {
   
    Student student("Alice", 20, 12345);
    Professor professor("Dr. Smith", 45, "Computer Science");
    ProgrammingCourse cppCourse("C++ Programming", 101, "C++");

    cout << "Student details:" << endl;
    student.displayDetails();

    cout << "\nProfessor details:" << endl;
    professor.displayDetails();

    cout << "\nCourse details:" << endl;
    cppCourse.displayDetails();

    return 0;
}
