#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    
    if (num1 <= 0 || num2 <= 0) {
        std::cout << "Please enter positive integers." ;
        return 1;
    }

    int gcd;

    do {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    } while (num2 != 0);

    cout << "The greatest common divisor (GCD) is: " << num1;

    return 0;
}
