#include <iostream>
using namespace std;
int main() {
    int num1, num2;
  cout << "Enter the first integer: ";
  cin >> num1;

  cout << "Enter the second integer: ";
  cin >> num2;
  cout << "Addition: " << num1 + num2 << std::endl;
   cout << "Subtraction: " << num1 - num2 << std::endl;
   cout << "Multiplication: " << num1 * num2 << std::endl;
    if (num2 != 0) {
       cout << "Division: " << static_cast<double>(num1) / num2 << std::endl;
       cout << "Modulo: " << num1 % num2 << std::endl;
    } else {
       cout << "Cannot perform division and modulo" ;
       
}
    return 0;
}
