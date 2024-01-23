#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Multiplication table for " << num << "\n";
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << (num * i) << "\n";
    }
    return 0;
}
