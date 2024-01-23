#include <iostream>
#include <string>
using namespace std;
class Manager {
private:
    string name;
    int age;

public:
    Manager() : name(""), age(0) {}

    Manager(const string& newName, int newAge) : name(newName), age(newAge) {}

    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }
};

int main() {
    const int numberOfManagers = 3;

    Manager managerList[numberOfManagers] = {
        Manager("John Doe", 35),
        Manager("Jane Smith", 40),
        Manager("Bob Johnson", 45)
    };
    cout << "Details of Managers:" << endl;
    for (int i = 0; i < numberOfManagers; ++i) {
        cout << "Manager " << i + 1 << ": ";
        managerList[i].displayDetails();
    }
    return 0;
}
