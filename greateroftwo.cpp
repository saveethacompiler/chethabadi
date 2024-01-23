#include <iostream>
int main() {
    int n1, n2;
    cout << "Enter 1st integer: ";
    cin >> n1;
    cout << "Enter 2nd integer: ";
    cin >> n2;
    if (n1 == n2)
        cout << "both are equal";
        else if (n1 > n2)
        cout << n1 << " is greater than " << n2;
        else
        cout << n2 << " is greater than " << n1;
    return 0;
}
