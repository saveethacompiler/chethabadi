#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter 1st , 2nd & 3rd integers: ";
    cin >> num1 >> num2 >> num3;
    int maxNum = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    cout << "The largest number is:: " << maxNum;
    return 0;
}
