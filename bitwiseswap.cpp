#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;
  
    cout << "Before swapping:";
    cout << "First integer: " << x << " , Second integer: " << y ;
    x = x^y;
    y = x^y;
    x = x^y;
    cout << " After swapping:";
    cout << "First integer: " << x << " , Second integer: " << y ;
    return 0;
}
