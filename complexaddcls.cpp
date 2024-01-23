#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex addComplex(const Complex& c1, const Complex& c2);

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex complex1(2.5, 3.0);
    Complex complex2(1.5, 2.5);

    cout << "Complex Number 1: ";
    complex1.display();

    cout << "Complex Number 2: ";
    complex2.display();

    Complex sum = addComplex(complex1, complex2);

    cout << "\nSum of Complex Numbers: ";
    sum.display();

    return 0;
}
