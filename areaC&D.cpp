#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle constructor called." << std::endl;
    }


    ~Rectangle() {
        std::cout << "Rectangle destructor called." << std::endl;
    }

    double calculateArea() const {
        return length * width;
    }

    void displayDetails() const {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rectangle1(4.5, 3.2);
    rectangle1.displayDetails();
cout << "Area of rectangle: " << rectangle1.calculateArea() << endl;

    Rectangle rectangle2(7.8, 2.5);
 rectangle2.displayDetails();
cout << "Area of rectangle: " << rectangle2.calculateArea() << endl;
 return 0;
}
