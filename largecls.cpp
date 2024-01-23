#include <iostream>
using namespace std;
class MaxFinder {
private:
    int num1;
    int num2;

public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    friend int findMax(const MaxFinder& obj);
};

int findMax(const MaxFinder& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    MaxFinder numbers(8, 12);

    int maxNumber = findMax(numbers);
    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}
