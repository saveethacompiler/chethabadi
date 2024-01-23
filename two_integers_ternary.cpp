#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter 1st & 2nd integers: ";
    cin >> num1 >> num2;
    string result = (num1 == num2) ? "Equal" : "Not Equal";
    cout << "The two integers are: " << result;

    return 0;
}
