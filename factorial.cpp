#include <iostream>
using namespace std;
int main() {
    int num;
   cout << "Enter an integer: ";
   cin >> num;
    int factorial = 1;
    if(num<0) {
        cout << "enter positive integer";
    }
    else{
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
     cout << "Factorial of " << num << " is: " << factorial;
}
  

    return 0;
}
