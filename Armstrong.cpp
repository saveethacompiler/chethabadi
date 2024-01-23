#include <iostream>
using namespace std;
int main() {
    int num, r, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
int m=num;
    while (num != 0) {
    r = num% 10;
    result += r*r*r;
    num /= 10;
    }

    if (result == m)
        cout << m << " is an Armstrong number.";
    else
        cout << m << " is not an Armstrong number.";

    return 0;
}
