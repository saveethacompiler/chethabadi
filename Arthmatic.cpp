#include <iostream>
using namespace std;
int main() {
 
    int num1, num2;
    char operation;
   cout << "Enter the first integer: ";
   cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;
do{
    cout << "Enter the operation (1.add, 2.sub, 3.mul, 4.div, 5.mod): ";
    cin >> operation;
    switch (operation) {
        case '1':
           cout << "Addition: " << num1 + num2 << endl;
            break;
        case '2':
            std::cout << "Subtraction: " << num1 - num2 << endl;
            break;
        case '3':
            std::cout << "Multiplication: " << num1 * num2 <<endl;
            break;
        case '4':
            if (num2 != 0) {
                cout << "Division: " << static_cast<double>(num1) / num2 << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        case '5':
            if (num2 != 0) {
                cout << "Modulo: " << num1 % num2 << endl;
            } else {
                cout << "Cannot calculate modulo with zero." << endl;
            }
            break;
        default:
            cout << "Invalid operation entered." << endl;
    }
 cout << "Do you want to perform another operation? (y/n): ";
      cin >> operation;

    } while (operation == 'y' || operation == 'Y');
    return 0;
}
