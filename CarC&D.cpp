#include <iostream>
#include <string>
using namespace std;
class Car {
private:
string brand;
string model;
    int year;

public:
    Car(const string& carBrand, const string& carModel, int carYear)
        : brand(carBrand), model(carModel), year(carYear) {
        cout << "Car constructor called." << endl;
    }

    ~Car() {
        cout << "Car destructor called." << endl;
    }
    void displayDetails() const {
       cout << "Car - Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", "Camry", 2022);

    car1.displayDetails();

    Car car2("Honda", "Civic", 2021);
  car2.displayDetails();
 return 0;
}
